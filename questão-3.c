p = &i;
*q = &j; // Um ponteiro desreferenciado não pode receber um endereço de memória.
p = &*&i;
i = (*&)j; // Não é possível retornar o endereço de memória e desreferenciar ao mesmo tempo.
i = *&j;
i = *&*&j;
q = *p; // A variável q (sem o *) é do tipo ponteiro, portanto não pode receber o valor desreferenciado da variável *p.
i = (*p)++ + *q;