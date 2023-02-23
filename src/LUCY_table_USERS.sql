
-- --------------------------------------------------------

--
-- Estrutura da tabela `USERS`
--

CREATE TABLE `USERS` (
  `CODIGO` int(11) NOT NULL,
  `NOME` varchar(50) NOT NULL,
  `PRIVILEGIOS_LEVEL` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Extraindo dados da tabela `USERS`
--

INSERT INTO `USERS` (`CODIGO`, `NOME`, `PRIVILEGIOS_LEVEL`) VALUES
(101, 'JOAO GABRIEL RODRIGUES', 101),
(102, 'LUCAS MILLER', 101);
