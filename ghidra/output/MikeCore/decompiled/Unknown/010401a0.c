// Function: FUN_010401a0
// Address: 010401a0
// Size: 939 bytes
// Class: Unknown
// String references:
//   "salt"
//   "hexsalt"
//   "crypto/kdf/scrypt.c"
//   "pass"
//   "hexpass"
//   "maxmem_bytes"


undefined8 FUN_010401a0(char *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  byte *pbVar10;
  int unaff_EBP;
  longlong unaff_RDI;
  int reason;
  
  if (param_2 == (byte *)0x0) {
    iVar5 = 0x66;
    reason = 0xb7;
LAB_010402b8:
    _ERR_put_error(0x2011947,iVar5,reason,param_4,unaff_EBP);
    return 0;
  }
  pbVar10 = param_2;
  iVar5 = _strcmp(param_1,(char *)param_2);
  if (iVar5 != 0) {
    iVar5 = _strcmp(param_1,(char *)pbVar10);
    if (iVar5 != 0) {
      iVar5 = _strcmp(param_1,(char *)pbVar10);
      if (iVar5 == 0) goto LAB_010402e6;
      iVar5 = _strcmp(param_1,(char *)pbVar10);
      if (iVar5 != 0) {
        iVar5 = _strcmp(param_1,(char *)pbVar10);
        if (iVar5 == 0) {
          bVar9 = *param_2;
          if (bVar9 == 0) {
            return 0;
          }
          uVar8 = 0;
          while( true ) {
            param_2 = param_2 + 1;
            if (9 < (byte)(bVar9 - 0x30)) break;
            auVar1._8_8_ = 0;
            auVar1._0_8_ = uVar8;
            uVar7 = SUB168(auVar1 * ZEXT816(10),0);
            uVar8 = (bVar9 - 0x30) + uVar7;
            if ((CARRY8((ulonglong)(bVar9 - 0x30),uVar7)) || (SUB168(auVar1 * ZEXT816(10),8) != 0))
            break;
            bVar9 = *param_2;
            if (bVar9 == 0) {
              if (uVar8 < 2) {
                return 0;
              }
              uVar7 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
              uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
              if ((byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) < 2
                 ) {
                *(ulonglong *)(*(longlong *)(unaff_RDI + 0x28) + 0x20) = uVar8;
                return 1;
              }
              return 0;
            }
          }
        }
        else {
          iVar5 = _strcmp(param_1,(char *)pbVar10);
          if (iVar5 == 0) {
            bVar9 = *param_2;
            if (bVar9 == 0) {
              return 0;
            }
            uVar8 = 0;
            while (param_2 = param_2 + 1, (byte)(bVar9 - 0x30) < 10) {
              auVar2._8_8_ = 0;
              auVar2._0_8_ = uVar8;
              uVar7 = SUB168(auVar2 * ZEXT816(10),0);
              uVar8 = (bVar9 - 0x30) + uVar7;
              if ((CARRY8((ulonglong)(bVar9 - 0x30),uVar7)) || (SUB168(auVar2 * ZEXT816(10),8) != 0)
                 ) break;
              bVar9 = *param_2;
              if (bVar9 == 0) {
                if (uVar8 == 0) {
                  return 0;
                }
                *(ulonglong *)(*(longlong *)(unaff_RDI + 0x28) + 0x28) = uVar8;
                return 1;
              }
            }
          }
          else {
            iVar5 = _strcmp(param_1,(char *)pbVar10);
            if (iVar5 == 0) {
              bVar9 = *param_2;
              if (bVar9 == 0) {
                return 0;
              }
              uVar8 = 0;
              while (param_2 = param_2 + 1, (byte)(bVar9 - 0x30) < 10) {
                auVar3._8_8_ = 0;
                auVar3._0_8_ = uVar8;
                uVar7 = SUB168(auVar3 * ZEXT816(10),0);
                uVar8 = (bVar9 - 0x30) + uVar7;
                if ((CARRY8((ulonglong)(bVar9 - 0x30),uVar7)) ||
                   (SUB168(auVar3 * ZEXT816(10),8) != 0)) break;
                bVar9 = *param_2;
                if (bVar9 == 0) {
                  if (uVar8 == 0) {
                    return 0;
                  }
                  *(ulonglong *)(*(longlong *)(unaff_RDI + 0x28) + 0x30) = uVar8;
                  return 1;
                }
              }
            }
            else {
              iVar5 = _strcmp(param_1,(char *)pbVar10);
              if (iVar5 != 0) {
                _ERR_put_error(0x2011947,0x67,0xd4,param_4,unaff_EBP);
                return 0xfffffffe;
              }
              bVar9 = *param_2;
              if (bVar9 == 0) {
                return 0;
              }
              uVar8 = 0;
              while (param_2 = param_2 + 1, (byte)(bVar9 - 0x30) < 10) {
                auVar4._8_8_ = 0;
                auVar4._0_8_ = uVar8;
                uVar7 = SUB168(auVar4 * ZEXT816(10),0);
                uVar8 = (bVar9 - 0x30) + uVar7;
                if ((CARRY8((ulonglong)(bVar9 - 0x30),uVar7)) ||
                   (SUB168(auVar4 * ZEXT816(10),8) != 0)) break;
                bVar9 = *param_2;
                if (bVar9 == 0) {
                  if (uVar8 == 0) {
                    return 0;
                  }
                  *(ulonglong *)(*(longlong *)(unaff_RDI + 0x28) + 0x38) = uVar8;
                  return 1;
                }
              }
            }
          }
        }
        iVar5 = 0x6c;
        reason = 0xad;
        goto LAB_010402b8;
      }
    }
    uVar6 = _EVP_PKEY_CTX_hex2ctrl();
    return uVar6;
  }
LAB_010402e6:
  uVar6 = _EVP_PKEY_CTX_str2ctrl();
  return uVar6;
}


