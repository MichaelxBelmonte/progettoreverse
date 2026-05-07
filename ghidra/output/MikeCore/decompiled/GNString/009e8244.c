// Function: FUN_009e8244
// Address: 009e8244
// Size: 1203 bytes
// Class: GNString


void FUN_009e8244(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  uint uVar6;
  longlong lVar7;
  dword *pdVar8;
  void *pvVar9;
  longlong lVar10;
  longlong lVar11;
  longlong unaff_RDI;
  longlong local_48;
  longlong local_40;
  
  lVar11 = *(longlong *)(unaff_RDI + 0x18);
  pcVar2 = *(char **)(unaff_RDI + 0x20);
  pcVar5 = (char *)(lVar11 + 1);
  *(char **)(unaff_RDI + 0x18) = pcVar5;
  if (pcVar5 == pcVar2) {
LAB_009e829b:
    FUN_009e818c(param_1);
    return;
  }
  uVar6 = (uint)*pcVar5;
  param_1 = (char *)(ulonglong)uVar6;
  switch(uVar6) {
  case 0x6e:
    break;
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x73:
  case 0x75:
  case 0x77:
switchD_009e8284_caseD_6f:
    if ((*(byte *)(unaff_RDI + 0x2b) & 1) == 0) {
      if ((int)uVar6 < 0x55) {
        if (uVar6 == 0x45) {
          *(longlong *)(unaff_RDI + 0x18) = lVar11 + 2;
          *(undefined4 *)(unaff_RDI + 0x2c) = 0;
          return;
        }
        if (uVar6 == 0x4c) {
          *(longlong *)(unaff_RDI + 0x18) = lVar11 + 2;
          *(undefined4 *)(unaff_RDI + 0x2c) = 3;
          return;
        }
      }
      else {
        if (uVar6 == 0x55) {
          *(longlong *)(unaff_RDI + 0x18) = lVar11 + 2;
          *(undefined4 *)(unaff_RDI + 0x2c) = 4;
          return;
        }
        if (uVar6 == 0x75) {
          *(longlong *)(unaff_RDI + 0x18) = lVar11 + 2;
          *(undefined4 *)(unaff_RDI + 0x30) = *(undefined4 *)(unaff_RDI + 0x2c);
          *(undefined4 *)(unaff_RDI + 0x2c) = 2;
          return;
        }
        if (uVar6 == 0x6c) {
          *(longlong *)(unaff_RDI + 0x18) = lVar11 + 2;
          *(undefined4 *)(unaff_RDI + 0x30) = *(undefined4 *)(unaff_RDI + 0x2c);
          *(undefined4 *)(unaff_RDI + 0x2c) = 1;
          return;
        }
      }
    }
    lVar11 = 1;
    if ((longlong)pcVar2 - (longlong)pcVar5 < 2) {
      lVar11 = (longlong)pcVar2 - (longlong)pcVar5;
    }
    if (lVar11 != 0) {
      FUN_009e8d30(pcVar5 + lVar11,pcVar5 + lVar11);
      pvVar9 = (void *)((longlong)&MACH_HEADER.cpusubtype + 2);
      iVar3 = FUN_009dcab0(10,local_40);
      *(undefined8 *)(unaff_RDI + 0x18) = *(undefined8 *)(unaff_RDI + 0x18);
      if (local_48 != 0) {
        local_40 = local_48;
        operator_delete(pvVar9);
      }
      if (0 < iVar3) {
LAB_009e8576:
        plVar4 = (longlong *)FUN_009e2686();
        lVar11 = *plVar4;
        if (plVar4[1] == lVar11) {
          return;
        }
        do {
          FUN_009e818c();
          lVar11 = lVar11 + 1;
        } while (lVar11 != plVar4[1]);
        return;
      }
      if (iVar3 == 0) {
        if ((*(byte *)(unaff_RDI + 0x2b) & 1) != 0) goto LAB_009e8576;
        lVar7 = *(longlong *)(unaff_RDI + 0x18);
        lVar11 = lVar7 + -1;
        *(longlong *)(unaff_RDI + 0x18) = lVar11;
        lVar11 = *(longlong *)(unaff_RDI + 0x20) - lVar11;
        lVar10 = 4;
        if (lVar11 < 5) {
          lVar10 = lVar11;
        }
        if (lVar10 != 0) {
          FUN_009e8d30(lVar10,lVar10 + -1 + lVar7);
          pdVar8 = &MACH_HEADER.cpusubtype;
          FUN_009dcab0(8,local_40);
          *(undefined8 *)(unaff_RDI + 0x18) = *(undefined8 *)(unaff_RDI + 0x18);
          if (local_48 != 0) {
            operator_delete(pdVar8);
          }
        }
        goto LAB_009e865a;
      }
      pcVar5 = *(char **)(unaff_RDI + 0x18);
    }
    *(char **)(unaff_RDI + 0x18) = pcVar5 + 1;
LAB_009e865a:
    FUN_009e818c();
    return;
  case 0x72:
    break;
  case 0x74:
    break;
  case 0x76:
    break;
  case 0x78:
    pcVar5 = (char *)(lVar11 + 2);
    *(char **)(unaff_RDI + 0x18) = pcVar5;
    if (pcVar5 == pcVar2) goto LAB_009e829b;
    if (*pcVar5 == '{') {
      *(char **)(unaff_RDI + 0x18) = (char *)(lVar11 + 3);
      if ((char *)(lVar11 + 3) != pcVar2) {
        FUN_009e8d30();
        pdVar8 = &MACH_HEADER.ncmds;
        iVar3 = FUN_009dcab0(0x10,local_40);
        *(undefined8 *)(unaff_RDI + 0x18) = *(undefined8 *)(unaff_RDI + 0x18);
        if (local_48 != 0) {
          operator_delete(pdVar8);
        }
        if (-1 < iVar3) {
          pcVar5 = *(char **)(unaff_RDI + 0x18);
          if ((pcVar5 == *(char **)(unaff_RDI + 0x20)) || (*pcVar5 != '}')) {
            do {
              pcVar2 = pcVar5;
              pcVar5 = pcVar2 + -1;
              *(char **)(unaff_RDI + 0x18) = pcVar5;
            } while (*pcVar5 != '\\');
            *(char **)(unaff_RDI + 0x18) = pcVar2 + 1;
          }
          else {
            *(char **)(unaff_RDI + 0x18) = pcVar5 + 1;
          }
          goto LAB_009e865a;
        }
      }
      FUN_009e818c();
    }
    else {
      lVar7 = 2;
      if ((longlong)pcVar2 - (longlong)pcVar5 < 3) {
        lVar7 = (longlong)pcVar2 - (longlong)pcVar5;
      }
      if (lVar7 != 0) {
        FUN_009e8d30(lVar7,lVar7 + 2 + lVar11);
        pdVar8 = &MACH_HEADER.ncmds;
        FUN_009dcab0(0x10,local_40);
        *(undefined8 *)(unaff_RDI + 0x18) = *(undefined8 *)(unaff_RDI + 0x18);
        if (local_48 != 0) {
          operator_delete(pdVar8);
        }
      }
    }
    goto LAB_009e865a;
  default:
    switch(uVar6) {
    case 0x61:
      break;
    default:
      goto switchD_009e8284_caseD_6f;
    case 99:
      param_1 = (char *)(lVar11 + 2);
      *(char **)(unaff_RDI + 0x18) = param_1;
      if (param_1 == pcVar2) {
        *(char **)(unaff_RDI + 0x18) = pcVar2;
      }
      else {
        *(longlong *)(unaff_RDI + 0x18) = lVar11 + 3;
        cVar1 = *(char *)(lVar11 + 2);
        uVar6 = (int)cVar1 + 0x1f;
        if (-1 < cVar1) {
          uVar6 = (int)cVar1;
        }
        param_1 = (char *)(ulonglong)(uVar6 & 0xe0);
      }
      goto LAB_009e829b;
    case 0x65:
      break;
    case 0x66:
    }
  }
  FUN_009e818c();
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  return;
}


