int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		res;
	int		count;

	count = 0;
	res = 0;
	line = NULL;
	if (argc > 0)
	{
		fd_test(--argc, ++argv);
	}
	else
	{
		if ((fd = open(argv[1], O_RDONLY)) > 0 && argc == 1)
		{
			while ((res = get_next_line(fd, &line)) > 0)
			{
				write(1, line, ft_strlen(line) + 1);
					write(1, "\n", 1);
				free(line);
				count++;
			}
		}
		close(fd);
	}
	return (0);
}
