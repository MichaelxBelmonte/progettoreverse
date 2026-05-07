// Function: FUN_010c6720
// Address: 010c6720
// Size: 916 bytes
// Class: Unknown
// String references:
//   "%X"
//   "\n"
//   "%*s%s:\n"
//   "IP Address:<invalid>"
//   "%*s"
//   "IP:"
//   "%d.%d.%d.%d/%d.%d.%d.%d"

void FUN_010c6720(uint64_t param_1,uint param_2)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  void*puVar5;
  char *out;
  GENERAL_NAME *gen;
  char *pcVar6;
  
  iVar3 = _OPENSSL_sk_num();
  if (0 < iVar3) {
    _BIO_printf((BIO *)"",(char *)(uint64_t)param_2,param_1);
  }
  iVar3 = _OPENSSL_sk_num();
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      puVar5 = (void*)_OPENSSL_sk_value();
      gen = (GENERAL_NAME *)(uint64_t)(param_2 + 2);
      out = "";
      _BIO_printf((BIO *)"",(char *)gen);
      if (*(int *)*puVar5 == 7) {
        piVar1 = *(int **)((int *)*puVar5 + 2);
        iVar4 = *piVar1;
        puVar2 = *(ushort **)(piVar1 + 2);
        _BIO_puts((BIO *)out,(char *)gen);
        if (iVar4 == 0x20) {
          pcVar6 = (char *)(uint64_t)
                           (((uint)*puVar2 << 0x10) >> 0x18 |
                           ((uint)*puVar2 << 0x10 & 0xff0000) >> 8);
          _BIO_printf((BIO *)out,pcVar6);
          _BIO_puts((BIO *)out,pcVar6);
          pcVar6 = (char *)(uint64_t)
                           (((uint)puVar2[1] << 0x10) >> 0x18 |
                           ((uint)puVar2[1] << 0x10 & 0xff0000) >> 8);
          _BIO_printf((BIO *)out,pcVar6);
          _BIO_puts((BIO *)out,pcVar6);
          pcVar6 = (char *)(uint64_t)
                           (((uint)puVar2[2] << 0x10) >> 0x18 |
                           ((uint)puVar2[2] << 0x10 & 0xff0000) >> 8);
          _BIO_printf((BIO *)out,pcVar6);
          _BIO_puts((BIO *)out,pcVar6);
          pcVar6 = (char *)(uint64_t)
                           (((uint)puVar2[3] << 0x10) >> 0x18 |
                           ((uint)puVar2[3] << 0x10 & 0xff0000) >> 8);
          _BIO_printf((BIO *)out,pcVar6);
          _BIO_puts((BIO *)out,pcVar6);
          pcVar6 = (char *)(uint64_t)
                           (((uint)puVar2[4] << 0x10) >> 0x18 |
                           ((uint)puVar2[4] << 0x10 & 0xff0000) >> 8);
          _BIO_printf((BIO *)out,pcVar6);
          _BIO_puts((BIO *)out,pcVar6);
          pcVar6 = (char *)(uint64_t)
                           (((uint)puVar2[5] << 0x10) >> 0x18 |
                           ((uint)puVar2[5] << 0x10 & 0xff0000) >> 8);
          _BIO_printf((BIO *)out,pcVar6);
          _BIO_puts((BIO *)out,pcVar6);
          pcVar6 = (char *)(uint64_t)
                           (((uint)puVar2[6] << 0x10) >> 0x18 |
                           ((uint)puVar2[6] << 0x10 & 0xff0000) >> 8);
          _BIO_printf((BIO *)out,pcVar6);
          _BIO_puts((BIO *)out,pcVar6);
          pcVar6 = (char *)(uint64_t)
                           (((uint)puVar2[7] << 0x10) >> 0x18 |
                           ((uint)puVar2[7] << 0x10 & 0xff0000) >> 8);
          _BIO_printf((BIO *)out,pcVar6);
          _BIO_puts((BIO *)out,pcVar6);
          pcVar6 = (char *)(uint64_t)
                           (((uint)puVar2[8] << 0x10) >> 0x18 |
                           ((uint)puVar2[8] << 0x10 & 0xff0000) >> 8);
          _BIO_printf((BIO *)out,pcVar6);
          _BIO_puts((BIO *)out,pcVar6);
          pcVar6 = (char *)(uint64_t)
                           (((uint)puVar2[9] << 0x10) >> 0x18 |
                           ((uint)puVar2[9] << 0x10 & 0xff0000) >> 8);
          _BIO_printf((BIO *)out,pcVar6);
          _BIO_puts((BIO *)out,pcVar6);
          pcVar6 = (char *)(uint64_t)
                           (((uint)puVar2[10] << 0x10) >> 0x18 |
                           ((uint)puVar2[10] << 0x10 & 0xff0000) >> 8);
          _BIO_printf((BIO *)out,pcVar6);
          _BIO_puts((BIO *)out,pcVar6);
          pcVar6 = (char *)(uint64_t)
                           (((uint)puVar2[0xb] << 0x10) >> 0x18 |
                           ((uint)puVar2[0xb] << 0x10 & 0xff0000) >> 8);
          _BIO_printf((BIO *)out,pcVar6);
          _BIO_puts((BIO *)out,pcVar6);
          pcVar6 = (char *)(uint64_t)
                           (((uint)puVar2[0xc] << 0x10) >> 0x18 |
                           ((uint)puVar2[0xc] << 0x10 & 0xff0000) >> 8);
          _BIO_printf((BIO *)out,pcVar6);
          _BIO_puts((BIO *)out,pcVar6);
          pcVar6 = (char *)(uint64_t)
                           (((uint)puVar2[0xd] << 0x10) >> 0x18 |
                           ((uint)puVar2[0xd] << 0x10 & 0xff0000) >> 8);
          _BIO_printf((BIO *)out,pcVar6);
          _BIO_puts((BIO *)out,pcVar6);
          pcVar6 = (char *)(uint64_t)
                           (((uint)puVar2[0xe] << 0x10) >> 0x18 |
                           ((uint)puVar2[0xe] << 0x10 & 0xff0000) >> 8);
          _BIO_printf((BIO *)out,pcVar6);
          _BIO_puts((BIO *)out,pcVar6);
          gen = (GENERAL_NAME *)
                (uint64_t)
                (((uint)puVar2[0xf] << 0x10) >> 0x18 | ((uint)puVar2[0xf] << 0x10 & 0xff0000) >> 8);
          _BIO_printf((BIO *)out,(char *)gen);
        }
        else if (iVar4 == 8) {
          gen = (GENERAL_NAME *)(uint64_t)(byte)*puVar2;
          out = (char *)(uint64_t)*(byte *)((int64_t)puVar2 + 1);
          _BIO_printf((BIO *)out,(char *)gen,(uint64_t)(byte)puVar2[1],
                      (uint64_t)*(byte *)((int64_t)puVar2 + 3));
        }
        else {
          _BIO_printf((BIO *)out,(char *)gen);
        }
      }
      else {
        _GENERAL_NAME_print((BIO *)out,gen);
      }
      _BIO_puts((BIO *)out,(char *)gen);
      iVar3 = iVar3 + 1;
      iVar4 = _OPENSSL_sk_num();
    } while (iVar3 < iVar4);
  }
  return;
}

