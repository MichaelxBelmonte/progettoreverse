// Function: FUN_00f31e20
// Address: 00f31e20
// Size: 1064 bytes
// Class: Unknown
// String references:
//   "\""


byte * FUN_00f31e20(char *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  byte bVar3;
  byte *pbVar4;
  ulonglong uVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  longlong unaff_RDI;
  longlong lVar10;
  
  pcVar6 = param_1;
  pbVar4 = (byte *)FUN_00f2fd80();
  if ((pbVar4 != (byte *)0x0) && (*pbVar4 != 0)) {
    if (param_2 != (undefined8 *)0x0) {
      FUN_00f2fb40();
      *(undefined8 *)(unaff_RDI + 8) = *param_2;
    }
    FUN_00f2d870();
    puVar2 = PTR___DefaultRuneLocale_0249c238;
    bVar3 = *pbVar4;
    uVar5 = (ulonglong)bVar3;
    if ((uVar5 != 0) &&
       (((0x7e < bVar3 || ((PTR___DefaultRuneLocale_0249c238[uVar5 * 4 + 0x3d] & 1) != 0)) ||
        (pcVar6 = PTR___DefaultRuneLocale_0249c238, bVar3 == 0x5f)))) {
      pcVar6 = (char *)0x4000000002003;
      pbVar9 = pbVar4;
      do {
        bVar3 = (byte)uVar5;
        if (((bVar3 < 0x7f) && ((PTR___DefaultRuneLocale_0249c238[uVar5 * 4 + 0x3d] & 5) == 0)) &&
           ((uVar7 = (int)uVar5 - 0x2d, 0x32 < (byte)uVar7 ||
            ((0x4000000002003U >> ((ulonglong)(uVar7 & 0xff) & 0x3f) & 1) == 0))))
        goto LAB_00f31f00;
        pbVar1 = pbVar9 + 1;
        uVar5 = (ulonglong)*pbVar1;
        pbVar9 = pbVar9 + 1;
      } while (*pbVar1 != 0);
      bVar3 = 0;
LAB_00f31f00:
      if (0 < (longlong)pbVar9 - (longlong)pbVar4) {
        FUN_00f2d870();
        bVar3 = *pbVar9;
      }
      if (bVar3 != 0) {
        pbVar4 = (byte *)FUN_00f2fd80();
        if ((pbVar4 == (byte *)0x0) || (*pbVar4 != 0x3d)) {
          lVar10 = *(longlong *)(unaff_RDI + 0x18);
          if (lVar10 == 0) {
            return (byte *)0x0;
          }
          if (*(char *)(lVar10 + 0x50) != '\0') {
            return (byte *)0x0;
          }
          *(undefined1 *)(lVar10 + 0x50) = 1;
          *(undefined4 *)(lVar10 + 0x54) = 6;
          _strlen(pcVar6);
          FUN_00f2d870();
          *(undefined8 *)(lVar10 + 100) = 0xffffffffffffffff;
        }
        else {
          pbVar4 = (byte *)FUN_00f2fd80();
          if (pbVar4 != (byte *)0x0) {
            bVar3 = *pbVar4;
            if (bVar3 == 0x27) {
              pcVar6 = "\'";
LAB_00f32107:
              pbVar4 = (byte *)FUN_00f30260(pcVar6,0,0,(ulonglong)param_1 & 0xffffffff);
              return pbVar4;
            }
            if (bVar3 == 0x22) {
              pcVar6 = "\"";
              goto LAB_00f32107;
            }
            if (bVar3 != 0) {
              uVar8 = 0;
              FUN_00f2d870();
              bVar3 = *pbVar4;
              do {
                if (bVar3 == 0) {
                  return pbVar4;
                }
                if ((char)bVar3 < '\0') {
                  uVar7 = ___maskrune((__darwin_ct_rune_t)pcVar6,(ulong)uVar8);
                }
                else {
                  uVar7 = *(uint *)(puVar2 + (ulonglong)bVar3 * 4 + 0x3c) & 0x4000;
                }
                if (uVar7 != 0) {
                  return pbVar4;
                }
                if (bVar3 == 10) {
                  return pbVar4;
                }
                if (bVar3 == 0xd) {
                  return pbVar4;
                }
                uVar7 = *pbVar4 - 0x22;
                pcVar6 = (char *)(ulonglong)uVar7;
                if ((byte)uVar7 < 0x1d) {
                  pcVar6 = (char *)((longlong)&switchD_00f321d4::switchdataD_00f3224c +
                                   (longlong)
                                   (int)(&switchD_00f321d4::switchdataD_00f3224c)[uVar7 & 0xff]);
                  switch(uVar7 & 0xff) {
                  case 0:
                  case 5:
                    lVar10 = *(longlong *)(unaff_RDI + 0x18);
                    if (lVar10 == 0) {
                      return (byte *)0x0;
                    }
                    if (*(char *)(lVar10 + 0x50) != '\0') {
                      return (byte *)0x0;
                    }
                    *(undefined1 *)(lVar10 + 0x50) = 1;
                    *(undefined4 *)(lVar10 + 0x54) = 6;
                    _strlen(pcVar6);
                    FUN_00f2d870();
                    *(undefined8 *)(lVar10 + 100) = 0xffffffffffffffff;
                    if (param_2 == (undefined8 *)0x0) {
                      return (byte *)0x0;
                    }
                    FUN_00f2fb40();
                    uVar8 = *param_2;
                    goto LAB_00f320cf;
                  case 0xd:
                  case 0x1c:
                    return pbVar4;
                  }
                }
                uVar8 = 1;
                FUN_00f2d920();
                bVar3 = pbVar4[1];
                pbVar4 = pbVar4 + 1;
              } while( true );
            }
          }
          lVar10 = *(longlong *)(unaff_RDI + 0x18);
          if (lVar10 == 0) {
            return (byte *)0x0;
          }
          if (*(char *)(lVar10 + 0x50) != '\0') {
            return (byte *)0x0;
          }
          *(undefined1 *)(lVar10 + 0x50) = 1;
          *(undefined4 *)(lVar10 + 0x54) = 6;
          _strlen(pcVar6);
          FUN_00f2d870();
          *(undefined8 *)(lVar10 + 100) = 0xffffffffffffffff;
        }
        if (pbVar4 == (byte *)0x0) {
          return (byte *)0x0;
        }
        if (param_2 == (undefined8 *)0x0) {
          return (byte *)0x0;
        }
        FUN_00f2fb40();
        uVar8 = *param_2;
LAB_00f320cf:
        *(undefined8 *)(lVar10 + 100) = uVar8;
        return (byte *)0x0;
      }
    }
    lVar10 = *(longlong *)(unaff_RDI + 0x18);
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x50) == '\0')) {
      *(undefined1 *)(lVar10 + 0x50) = 1;
      *(undefined4 *)(lVar10 + 0x54) = 6;
      _strlen(pcVar6);
      FUN_00f2d870();
      *(undefined8 *)(lVar10 + 100) = 0xffffffffffffffff;
      if (param_2 != (undefined8 *)0x0) {
        FUN_00f2fb40();
        *(undefined8 *)(lVar10 + 100) = *param_2;
      }
    }
  }
  return (byte *)0x0;
}


