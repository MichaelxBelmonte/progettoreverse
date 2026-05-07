// Function: FUN_00f628b0
// Address: 00f628b0
// Size: 1129 bytes
// Class: Unknown
// String references:
//   "crypto/asn1/a_strex.c"


int FUN_00f628b0(uint *param_1,uint param_2,ulong *param_3,char *param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint *str;
  qword *str_00;
  uint *puVar4;
  uint unaff_ESI;
  uint *puVar5;
  qword *pqVar6;
  uint *unaff_RDI;
  ulong *puVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulong *local_res8;
  int in_stack_ffffffffffffff98;
  ulonglong local_40;
  uint local_38;
  uint local_34;
  
  uVar9 = param_2 & 7;
  local_34 = param_2;
  if (uVar9 == 2) {
    if ((unaff_ESI & 1) == 0) goto LAB_00f6291a;
    iVar10 = 0x81;
    iVar2 = 0xa1;
  }
  else {
    if ((uVar9 != 4) || ((unaff_ESI & 3) == 0)) {
LAB_00f6291a:
      if (unaff_ESI == 0) {
        return 0;
      }
      puVar5 = (uint *)((longlong)(int)unaff_ESI + (longlong)unaff_RDI);
      local_38 = (uint)param_1;
      if (uVar9 == 4) {
        if ((param_2 & 8) != 0) {
          iVar10 = 0;
          local_34 = local_38 & 1;
          puVar7 = param_3;
          do {
            uVar9 = *unaff_RDI;
            unaff_RDI = unaff_RDI + 1;
            uVar8 = (ulonglong)uVar9 << 0x20;
            local_40 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                       (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8;
            uVar9 = _UTF8_putc((uchar *)(ulonglong)local_34,(int)local_40,(ulong)puVar7);
            if (0 < (int)uVar9) {
              uVar8 = 0;
              do {
                puVar7 = local_res8;
                iVar2 = FUN_00f62d30(param_4,param_3);
                if (iVar2 < 0) {
                  return -1;
                }
                iVar10 = iVar10 + iVar2;
                uVar8 = uVar8 + 1;
              } while (uVar9 != uVar8);
            }
          } while (unaff_RDI != puVar5);
          return iVar10;
        }
        local_34 = local_38 & 1;
        iVar10 = 0;
        do {
          uVar9 = *unaff_RDI;
          unaff_RDI = unaff_RDI + 1;
          uVar8 = (ulonglong)uVar9 << 0x20;
          local_40 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                     (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8;
          iVar2 = FUN_00f62d30(param_4,param_3,local_res8);
          if (iVar2 < 0) {
            return -1;
          }
          iVar10 = iVar10 + iVar2;
        } while (unaff_RDI != puVar5);
        return iVar10;
      }
      if (uVar9 == 0) {
        iVar10 = 0;
        str = param_1;
        puVar4 = unaff_RDI;
        puVar7 = param_3;
        do {
          uVar9 = _UTF8_getc((uchar *)str,(int)&local_40,puVar7);
          if ((int)uVar9 < 0) {
            return -1;
          }
          pqVar6 = (qword *)((ulonglong)(puVar4 == unaff_RDI & (byte)param_1 & 1) << 5);
          puVar4 = (uint *)((longlong)puVar4 + (ulonglong)uVar9);
          str_00 = &segment_command_00000020.vmsize;
          if (((ulonglong)param_1 & 1) == 0) {
            str_00 = pqVar6;
          }
          if (puVar4 != puVar5) {
            str_00 = pqVar6;
          }
          if ((local_34 & 8) == 0) {
            puVar7 = local_res8;
            iVar2 = FUN_00f62d30(param_4,param_3);
            if (iVar2 < 0) {
              return -1;
            }
            iVar10 = iVar10 + iVar2;
          }
          else {
            uVar9 = _UTF8_putc((uchar *)str_00,(int)local_40,(ulong)puVar7);
            if (0 < (int)uVar9) {
              uVar8 = 0;
              do {
                puVar7 = local_res8;
                iVar2 = FUN_00f62d30(param_4,param_3);
                if (iVar2 < 0) {
                  return -1;
                }
                iVar10 = iVar10 + iVar2;
                uVar8 = uVar8 + 1;
              } while (uVar9 != uVar8);
            }
          }
          str = puVar5;
        } while (puVar4 != puVar5);
        return iVar10;
      }
      iVar10 = 0;
      puVar7 = param_3;
      do {
        while( true ) {
          if (uVar9 == 1) {
            local_40 = (ulonglong)(byte)*unaff_RDI;
            unaff_RDI = (uint *)((longlong)unaff_RDI + 1);
          }
          else {
            if (uVar9 != 2) {
              return -1;
            }
            uVar3 = *unaff_RDI;
            pbVar1 = (byte *)((longlong)unaff_RDI + 1);
            unaff_RDI = (uint *)((longlong)unaff_RDI + 2);
            local_40 = (ulonglong)CONCAT11((byte)uVar3,*pbVar1);
          }
          if ((local_34 & 8) == 0) break;
          uVar3 = _UTF8_putc((uchar *)unaff_RDI,(int)local_40,(ulong)puVar7);
          if (0 < (int)uVar3) {
            uVar8 = 0;
            do {
              puVar7 = local_res8;
              iVar2 = FUN_00f62d30(param_4,param_3);
              if (iVar2 < 0) {
                return -1;
              }
              iVar10 = iVar10 + iVar2;
              uVar8 = uVar8 + 1;
            } while (uVar3 != uVar8);
          }
          if (unaff_RDI == puVar5) {
            return iVar10;
          }
        }
        puVar7 = local_res8;
        iVar2 = FUN_00f62d30(param_4,param_3);
        if (iVar2 < 0) {
          return -1;
        }
        iVar10 = iVar10 + iVar2;
      } while (unaff_RDI != puVar5);
      return iVar10;
    }
    iVar10 = 0x85;
    iVar2 = 0x9b;
  }
  _ERR_put_error(0x20073cf,iVar10,iVar2,param_4,in_stack_ffffffffffffff98);
  return -1;
}


