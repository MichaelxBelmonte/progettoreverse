// Function: FUN_009dfbf8
// Address: 009dfbf8
// Size: 586 bytes
// Class: Unknown


void FUN_009dfbf8(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  void *pvVar9;
  longlong lVar10;
  longlong *unaff_RSI;
  byte *unaff_RDI;
  byte local_40;
  byte local_3f [7];
  ulonglong local_38;
  byte *local_30;
  
  unaff_RDI[0] = 0;
  unaff_RDI[1] = 0;
  pbVar5 = (byte *)unaff_RSI[0x11];
  lVar10 = *(longlong *)unaff_RSI[1];
  cVar3 = *(char *)(lVar10 + 0x20 + (ulonglong)*pbVar5);
  pbVar8 = (byte *)CONCAT71((int7)((ulonglong)unaff_RSI[1] >> 8),cVar3);
  if (cVar3 == '\t') {
    pbVar2 = (byte *)unaff_RSI[0x10];
    pbVar8 = pbVar5 + 1;
    unaff_RSI[0x11] = (longlong)pbVar8;
    if (pbVar2 != pbVar8) {
      if (*(char *)(lVar10 + 0x20 + (ulonglong)*pbVar8) != '\x05') {
        unaff_RSI[0x11] = (longlong)pbVar5;
        *unaff_RDI = *pbVar5;
        unaff_RSI[0x11] = (longlong)pbVar8;
        return;
      }
      pbVar1 = pbVar5 + 2;
      unaff_RSI[0x11] = (longlong)pbVar1;
      if (pbVar2 != pbVar1) {
        pbVar8 = pbVar5 + 3;
        unaff_RSI[0x11] = (longlong)pbVar8;
        if (pbVar2 != pbVar8) {
          do {
            pbVar7 = pbVar5;
            if (pbVar2 + -3 == pbVar7) goto LAB_009dfdb6;
            pbVar8 = (byte *)(ulonglong)pbVar7[3];
            bVar6 = pbVar8[lVar10 + 0x20];
            unaff_RSI[0x11] = (longlong)(pbVar7 + 4);
            pbVar5 = pbVar7 + 1;
          } while (bVar6 != 5);
          if ((pbVar2 + -3 != pbVar7 + 1) &&
             (pbVar8 = (byte *)(ulonglong)pbVar7[4], pbVar8[lVar10 + 0x20] == 10)) {
            pbVar8 = pbVar7 + 3;
            unaff_RSI[0x11] = (longlong)(pbVar7 + 5);
            FUN_009df20a(pbVar8,pbVar1);
            bVar6 = local_40 & 1;
            pvVar9 = (void *)(CONCAT71((int7)((ulonglong)pbVar8 >> 8),local_40) & 0xffffffffffffff01
                             );
            if (bVar6 == 0) {
              local_38 = (ulonglong)(local_40 >> 1);
            }
            if (local_38 - 1 < 2) {
              pbVar8 = local_3f;
              if (bVar6 != 0) {
                pbVar8 = local_30;
              }
              *unaff_RDI = *pbVar8;
              if (local_38 < 2) {
                unaff_RDI[1] = 0;
              }
              else {
                pbVar8 = local_3f;
                if (bVar6 != 0) {
                  pbVar8 = local_30;
                }
                unaff_RDI[1] = pbVar8[1];
              }
            }
            else {
              FUN_009d86be(pvVar9,(longlong)pbVar1 - unaff_RSI[0xf]);
              pvVar9 = (void *)(CONCAT71((int7)((ulonglong)pvVar9 >> 8),local_40) &
                               0xffffffffffffff01);
            }
            if ((char)pvVar9 == '\0') {
              return;
            }
            operator_delete(pvVar9);
            return;
          }
        }
LAB_009dfdb6:
        lVar10 = (longlong)pbVar1 - unaff_RSI[0xf];
        goto LAB_009dfdc5;
      }
    }
    lVar10 = (longlong)pbVar2 - unaff_RSI[0xf];
LAB_009dfdc5:
    FUN_009d86be(pbVar8,lVar10);
    return;
  }
  if (cVar3 == '\f') {
    uVar4 = *(uint *)(*unaff_RSI + 0x28);
    unaff_RSI[0x11] = (longlong)(pbVar5 + 1);
    if ((uVar4 >> 0x10 & 1) == 0) {
      bVar6 = FUN_009dd3a8();
      goto LAB_009dfd51;
    }
  }
  else {
    if (cVar3 == '\x0e') {
      if (*(char *)(param_2 + 0x3c) == '\0') {
        pbVar2 = pbVar5 + 1;
        unaff_RSI[0x11] = (longlong)pbVar2;
        if ((pbVar2 == (byte *)unaff_RSI[0x10]) ||
           (pbVar8 = (byte *)(ulonglong)*pbVar2, pbVar8[lVar10 + 0x20] != 10)) {
          lVar10 = (longlong)pbVar2 - unaff_RSI[0xf];
          goto LAB_009dfdc5;
        }
        unaff_RSI[0x11] = (longlong)pbVar5;
      }
      unaff_RSI[0x11] = (longlong)(pbVar5 + 1);
      *unaff_RDI = *pbVar5;
      return;
    }
    unaff_RSI[0x11] = (longlong)(pbVar5 + 1);
  }
  bVar6 = *pbVar5;
LAB_009dfd51:
  *unaff_RDI = bVar6;
  unaff_RDI[1] = 0;
  return;
}


