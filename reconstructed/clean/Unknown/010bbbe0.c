// Function: FUN_010bbbe0
// Address: 010bbbe0
// Size: 868 bytes
// Class: Unknown
// String references:
//   "\n"
//   "%*sIPv4"
//   "%*sIPv6"
//   "%*sUnknown AFI %u"
//   " (Unicast)"
//   " (Multicast)"
//   " (Unicast/Multicast)"
//   " (MPLS)"
//   " (Tunnel)"
//   " (VPLS)"
//   " (BGP MDT)"
//   " (MPLS-labeled VPN)"
//   " (Unknown SAFI %u)"
//   ": inherit\n"
//   ":\n"
//   "/%d\n"
//   "%*s"

uint64_t FUN_010bbbe0(uint param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void*puVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  BIO *pBVar9;
  uint *puVar10;
  uint *format;
  
  format = (uint *)(uint64_t)param_1;
  iVar2 = _OPENSSL_sk_num();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      puVar5 = (void*)_OPENSSL_sk_value();
      uVar7 = 0;
      puVar10 = format;
      if (puVar5 == (void*)0x0) {
LAB_010bbcd0:
        pcVar8 = "";
        _BIO_printf((BIO *)"",(char *)format,(uint64_t)uVar7);
        piVar6 = (int *)*puVar5;
        iVar3 = *piVar6;
      }
      else {
        piVar6 = (int *)*puVar5;
        uVar7 = 0;
        if (piVar6 == (int *)0x0) goto LAB_010bbcd0;
        uVar7 = 0;
        if ((*(ushort **)(piVar6 + 2) == (ushort *)0x0) || (uVar7 = 0, *piVar6 < 2))
        goto LAB_010bbcd0;
        uVar7 = (uint)**(ushort **)(piVar6 + 2) << 0x10;
        uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8;
        if ((short)uVar7 == 2) {
          pcVar8 = "";
          _BIO_printf((BIO *)"",(char *)format);
          piVar6 = (int *)*puVar5;
          iVar3 = *piVar6;
        }
        else {
          if ((short)uVar7 != 1) goto LAB_010bbcd0;
          pcVar8 = "";
          _BIO_printf((BIO *)"",(char *)format);
          piVar6 = (int *)*puVar5;
          iVar3 = *piVar6;
        }
      }
      if (2 < iVar3) {
        bVar1 = *(byte *)(*(int64_t *)(piVar6 + 2) + 2);
        uVar7 = (int)CONCAT71((int7)((uint64_t)*(int64_t *)(piVar6 + 2) >> 8),bVar1) - 1;
        pcVar8 = (char *)(uint64_t)uVar7;
        if ((byte)uVar7 < 0x42) {
          puVar10 = &switchD_010bbd17::switchdataD_010bbf6c;
          pcVar8 = (char *)((int64_t)&switchD_010bbd17::switchdataD_010bbf6c +
                           (int64_t)(int)(&switchD_010bbd17::switchdataD_010bbf6c)[uVar7 & 0xff]);
          switch(uVar7 & 0xff) {
          case 0:
            _BIO_puts((BIO *)pcVar8,(char *)&switchD_010bbd17::switchdataD_010bbf6c);
            break;
          case 1:
            _BIO_puts((BIO *)pcVar8,(char *)&switchD_010bbd17::switchdataD_010bbf6c);
            break;
          case 2:
            _BIO_puts((BIO *)pcVar8,(char *)&switchD_010bbd17::switchdataD_010bbf6c);
            break;
          case 3:
            _BIO_puts((BIO *)pcVar8,(char *)&switchD_010bbd17::switchdataD_010bbf6c);
            break;
          default:
switchD_010bbd17_caseD_4:
            puVar10 = (uint *)(uint64_t)bVar1;
            _BIO_printf((BIO *)pcVar8,(char *)puVar10);
            break;
          case 0x3f:
            _BIO_puts((BIO *)pcVar8,(char *)&switchD_010bbd17::switchdataD_010bbf6c);
            break;
          case 0x40:
            _BIO_puts((BIO *)pcVar8,(char *)&switchD_010bbd17::switchdataD_010bbf6c);
            break;
          case 0x41:
            _BIO_puts((BIO *)pcVar8,(char *)&switchD_010bbd17::switchdataD_010bbf6c);
          }
        }
        else {
          if (bVar1 != 0x80) goto switchD_010bbd17_caseD_4;
          _BIO_puts((BIO *)pcVar8,(char *)puVar10);
        }
      }
      if (*(int *)puVar5[1] == 1) {
        _BIO_puts((BIO *)pcVar8,(char *)puVar10);
        iVar3 = _OPENSSL_sk_num();
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            piVar6 = (int *)_OPENSSL_sk_value();
            _BIO_printf((BIO *)"",(char *)(uint64_t)(param_1 + 2));
            if (*piVar6 == 1) {
              pBVar9 = (BIO *)**(void**)(piVar6 + 2);
              pcVar8 = (char *)0x0;
              iVar4 = FUN_010bcdc0();
              if (iVar4 == 0) {
                return 0;
              }
              _BIO_puts(pBVar9,pcVar8);
              pBVar9 = *(BIO **)(*(int64_t *)(piVar6 + 2) + 8);
              pcVar8 = (char *)((int64_t)&section_000000b8.reserved1 + 3);
              iVar4 = FUN_010bcdc0();
              if (iVar4 == 0) {
                return 0;
              }
              _BIO_puts(pBVar9,pcVar8);
            }
            else if (*piVar6 == 0) {
              pBVar9 = *(BIO **)(piVar6 + 2);
              iVar4 = FUN_010bcdc0(pBVar9,0);
              if (iVar4 == 0) {
                return 0;
              }
              _BIO_printf(pBVar9,(char *)(uint64_t)
                                         (**(int **)(piVar6 + 2) * 8 -
                                         ((*(int **)(piVar6 + 2))[4] & 7U)));
            }
            iVar3 = iVar3 + 1;
            iVar4 = _OPENSSL_sk_num();
          } while (iVar3 < iVar4);
        }
      }
      else if (*(int *)puVar5[1] == 0) {
        _BIO_puts((BIO *)pcVar8,(char *)puVar10);
      }
      iVar2 = iVar2 + 1;
      iVar3 = _OPENSSL_sk_num();
    } while (iVar2 < iVar3);
  }
  return 1;
}

