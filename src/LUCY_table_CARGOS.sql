
-- --------------------------------------------------------

--
-- Estrutura da tabela `CARGOS`
--

CREATE TABLE `CARGOS` (
  `CODIGO` int(11) NOT NULL,
  `CARGO` varchar(200) NOT NULL,
  `DESCRIÇAO` varchar(250) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Extraindo dados da tabela `CARGOS`
--

INSERT INTO `CARGOS` (`CODIGO`, `CARGO`, `DESCRIÇAO`) VALUES
(101, 'DESENVOLVEDOR CHEFE', 'GESTOR E SUPERVISOR DE TUDO'),
(102, 'DESENVLOLVEDOR C++', 'COLABORADOR SENIOR');
