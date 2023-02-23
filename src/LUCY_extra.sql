
--
-- Índices para tabelas despejadas
--

--
-- Índices para tabela `CARGOS`
--
ALTER TABLE `CARGOS`
  ADD PRIMARY KEY (`CODIGO`);

--
-- Índices para tabela `USERS`
--
ALTER TABLE `USERS`
  ADD PRIMARY KEY (`CODIGO`);

--
-- AUTO_INCREMENT de tabelas despejadas
--

--
-- AUTO_INCREMENT de tabela `CARGOS`
--
ALTER TABLE `CARGOS`
  MODIFY `CODIGO` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=104;

--
-- AUTO_INCREMENT de tabela `USERS`
--
ALTER TABLE `USERS`
  MODIFY `CODIGO` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=104;
