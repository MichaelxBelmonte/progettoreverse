// Function: FUN_009da2a6
// Address: 009da2a6
// Size: 1376 bytes
// Class: Unknown


undefined8 FUN_009da2a6(void)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  char unaff_SIL;
  longlong *unaff_RDI;
  byte *pbVar9;
  ulonglong local_58;
  byte local_48 [24];
  
  plVar1 = unaff_RDI + 0x11;
  pbVar8 = (byte *)unaff_RDI[0x11];
  if (pbVar8 != (byte *)unaff_RDI[0x10]) {
    do {
      cVar2 = FUN_009df118();
      if (cVar2 == '\0') {
        pbVar8 = (byte *)unaff_RDI[0x10];
        if ((byte *)unaff_RDI[0x11] != pbVar8) {
          uVar3 = FUN_009dcab0(10);
          if (-1 < (longlong)uVar3) {
            pbVar8 = (byte *)unaff_RDI[0x11];
            if (pbVar8 == (byte *)unaff_RDI[0x10]) goto LAB_009da53b;
            goto LAB_009da351;
          }
          pbVar8 = (byte *)unaff_RDI[0x11];
          if ((*(ushort *)(*unaff_RDI + 0x28) & 0x203) == 0) {
            lVar6 = *(longlong *)unaff_RDI[1];
            do {
              pbVar8 = pbVar8 + -1;
              *plVar1 = (longlong)pbVar8;
            } while (*(char *)(lVar6 + 0x20 + (ulonglong)*pbVar8) != '\x0f');
            goto LAB_009da406;
          }
          lVar6 = unaff_RDI[0xf];
          pbVar7 = local_48;
          FUN_009d5ed0();
          FUN_009d8cfc(pbVar7,(longlong)pbVar8 - lVar6);
          goto LAB_009da3cb;
        }
        break;
      }
      pbVar8 = (byte *)unaff_RDI[0x11] + 1;
      unaff_RDI[0x11] = (longlong)pbVar8;
    } while (pbVar8 != (byte *)unaff_RDI[0x10]);
  }
  if ((*(ushort *)(*unaff_RDI + 0x28) & 0x203) != 0) {
    lVar6 = unaff_RDI[0xf];
    pbVar7 = local_48;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar7,(longlong)pbVar8 - lVar6);
    goto LAB_009da3cb;
  }
  lVar6 = *(longlong *)unaff_RDI[1];
  do {
    pbVar8 = pbVar8 + -1;
    *plVar1 = (longlong)pbVar8;
  } while (*(char *)(lVar6 + 0x20 + (ulonglong)*pbVar8) != '\x0f');
  goto LAB_009da406;
  while( true ) {
    pbVar8 = pbVar7 + 1;
    unaff_RDI[0x11] = (longlong)pbVar8;
    if (pbVar8 == (byte *)unaff_RDI[0x10]) break;
LAB_009da351:
    cVar2 = FUN_009df118();
    pbVar7 = (byte *)unaff_RDI[0x11];
    if (cVar2 == '\0') {
      pbVar8 = (byte *)unaff_RDI[0x10];
      if (pbVar7 != pbVar8) {
        local_58 = uVar3;
        if (*(char *)(*(longlong *)unaff_RDI[1] + 0x20 + (ulonglong)*pbVar7) == '\x1b')
        goto LAB_009da493;
        goto LAB_009da59f;
      }
      break;
    }
  }
LAB_009da53b:
  if ((*(ushort *)(*unaff_RDI + 0x28) & 0x203) != 0) {
    lVar6 = unaff_RDI[0xf];
    pbVar7 = local_48;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar7,(longlong)pbVar8 - lVar6);
LAB_009da3cb:
    if ((local_48[0] & 1) != 0) {
      operator_delete(pbVar7);
    }
    return 0;
  }
  lVar6 = *(longlong *)unaff_RDI[1];
  do {
    pbVar8 = pbVar8 + -1;
    *plVar1 = (longlong)pbVar8;
  } while (*(char *)(lVar6 + 0x20 + (ulonglong)*pbVar8) != '\x0f');
  goto LAB_009da406;
  while( true ) {
    cVar2 = FUN_009df118();
    pbVar8 = (byte *)unaff_RDI[0x10];
    pbVar7 = (byte *)unaff_RDI[0x11];
    if (cVar2 == '\0') break;
LAB_009da493:
    *plVar1 = (longlong)(pbVar7 + 1);
    if (pbVar7 + 1 == pbVar8) goto LAB_009da5e5;
  }
  if (pbVar7 == pbVar8) {
LAB_009da5e5:
    if ((*(ushort *)(*unaff_RDI + 0x28) & 0x203) != 0) {
      lVar6 = unaff_RDI[0xf];
      pbVar7 = local_48;
      FUN_009d5ed0();
      FUN_009d8cfc(pbVar7,(longlong)pbVar8 - lVar6);
      goto LAB_009da3cb;
    }
    lVar6 = *(longlong *)unaff_RDI[1];
    do {
      pbVar8 = pbVar8 + -1;
      *plVar1 = (longlong)pbVar8;
    } while (*(char *)(lVar6 + 0x20 + (ulonglong)*pbVar8) != '\x0f');
  }
  else {
    uVar5 = FUN_009dcab0(10,pbVar8);
    local_58 = 0xffffffffffffffff;
    if (uVar5 < 0x7fffffffffffffff) {
      local_58 = uVar5;
    }
    pbVar8 = (byte *)unaff_RDI[0x10];
    pbVar7 = (byte *)unaff_RDI[0x11];
LAB_009da59f:
    if (pbVar7 != pbVar8) {
      do {
        cVar2 = FUN_009df118();
        pbVar9 = (byte *)unaff_RDI[0x11];
        if (cVar2 == '\0') {
          pbVar8 = (byte *)unaff_RDI[0x10];
          if (pbVar9 != pbVar8) {
            if (unaff_SIL == '\0') {
              lVar6 = *(longlong *)unaff_RDI[1];
            }
            else {
              lVar6 = *(longlong *)unaff_RDI[1];
              if (*(char *)(lVar6 + 0x20 + (ulonglong)*pbVar9) != '\f') {
                lVar6 = unaff_RDI[0xf];
                pbVar7 = local_48;
                FUN_009d5ed0();
                FUN_009d8cfc(pbVar7,(longlong)pbVar9 - lVar6);
                goto LAB_009da3cb;
              }
              pbVar9 = pbVar9 + 1;
              *plVar1 = (longlong)pbVar9;
              if (pbVar9 == pbVar8) {
                lVar6 = unaff_RDI[0xf];
                pbVar7 = local_48;
                FUN_009d5ed0();
                FUN_009d8cfc(pbVar7,(longlong)pbVar8 - lVar6);
                goto LAB_009da3cb;
              }
            }
            if (*(char *)(lVar6 + 0x20 + (ulonglong)*pbVar9) == '\x10') {
              *plVar1 = (longlong)(pbVar9 + 1);
              if (local_58 < uVar3) {
                unaff_RDI[0x11] = (longlong)(pbVar9 + -1);
                while( true ) {
                  cVar2 = FUN_009df118();
                  if (cVar2 == '\0') break;
                  unaff_RDI[0x11] = unaff_RDI[0x11] + -1;
                }
                unaff_RDI[0x11] = unaff_RDI[0x11] + 1;
                FUN_009d86be();
                return 0;
              }
              uVar4 = FUN_009d9e38();
              return uVar4;
            }
            do {
              pbVar9 = pbVar9 + -1;
              *plVar1 = (longlong)pbVar9;
            } while (*(char *)(lVar6 + 0x20 + (ulonglong)*pbVar9) != '\x0f');
            goto LAB_009da406;
          }
          break;
        }
        pbVar8 = pbVar9 + 1;
        unaff_RDI[0x11] = (longlong)pbVar8;
      } while (pbVar8 != (byte *)unaff_RDI[0x10]);
    }
    if ((*(ushort *)(*unaff_RDI + 0x28) & 0x203) != 0) {
      lVar6 = unaff_RDI[0xf];
      pbVar7 = local_48;
      FUN_009d5ed0();
      FUN_009d8cfc(pbVar7,(longlong)pbVar8 - lVar6);
      goto LAB_009da3cb;
    }
    lVar6 = *(longlong *)unaff_RDI[1];
    do {
      pbVar8 = pbVar8 + -1;
      *plVar1 = (longlong)pbVar8;
    } while (*(char *)(lVar6 + 0x20 + (ulonglong)*pbVar8) != '\x0f');
  }
LAB_009da406:
  uVar4 = FUN_009d8ca4();
  return uVar4;
}


