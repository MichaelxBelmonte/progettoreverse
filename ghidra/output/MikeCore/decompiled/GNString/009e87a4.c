// Function: FUN_009e87a4
// Address: 009e87a4
// Size: 535 bytes
// Class: GNString


void FUN_009e87a4(undefined8 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  char *pcVar6;
  longlong unaff_RDI;
  longlong local_50;
  undefined8 local_48;
  
  pcVar2 = *(char **)(unaff_RDI + 0x18);
  pcVar6 = *(char **)(unaff_RDI + 0x20);
  if (pcVar2 == pcVar6) {
    FUN_009e818c();
    return;
  }
  if (*pcVar2 != '{') {
    lVar4 = 2;
    if ((longlong)pcVar6 - (longlong)pcVar2 < 3) {
      lVar4 = (longlong)pcVar6 - (longlong)pcVar2;
    }
    if (lVar4 != 0) {
      FUN_009e8d30(param_1,pcVar2 + lVar4);
      pvVar5 = (void *)((longlong)&MACH_HEADER.cpusubtype + 2);
      iVar3 = FUN_009dcab0(10,local_48);
      *(undefined8 *)(unaff_RDI + 0x18) = *(undefined8 *)(unaff_RDI + 0x18);
      if (local_50 != 0) {
        operator_delete(pvVar5);
      }
      if (iVar3 < 0) goto LAB_009e8960;
      goto LAB_009e890b;
    }
    goto LAB_009e8960;
  }
  *(char **)(unaff_RDI + 0x18) = pcVar2 + 1;
  if (pcVar2 + 1 == pcVar6) {
LAB_009e8831:
    pcVar6 = *(char **)(unaff_RDI + 0x18);
    while ((pcVar6 != *(char **)(unaff_RDI + 0x20) && (*pcVar6 != '}'))) {
      pcVar6 = pcVar6 + 1;
      *(char **)(unaff_RDI + 0x18) = pcVar6;
    }
    iVar3 = FUN_009e8daa();
    if (-1 < iVar3) goto LAB_009e8869;
  }
  else {
    FUN_009e8d30();
    pvVar5 = (void *)((longlong)&MACH_HEADER.cpusubtype + 2);
    iVar3 = FUN_009dcab0(10,local_48);
    *(undefined8 *)(unaff_RDI + 0x18) = *(undefined8 *)(unaff_RDI + 0x18);
    if (local_50 != 0) {
      operator_delete(pvVar5);
    }
    if (iVar3 < 0) goto LAB_009e8831;
LAB_009e8869:
    if (**(char **)(unaff_RDI + 0x18) == '}') {
      *(char **)(unaff_RDI + 0x18) = *(char **)(unaff_RDI + 0x18) + 1;
LAB_009e890b:
      lVar4 = FUN_009e2686();
      if (*(char *)(lVar4 + 0x10) == '\0') {
        uVar1 = *(undefined4 *)(unaff_RDI + 0x2c);
        *(undefined4 *)(unaff_RDI + 0x2c) = 5;
        *(undefined1 *)(unaff_RDI + 0x34) = 1;
        FUN_009e8012();
        *(undefined1 *)(unaff_RDI + 0x34) = 0;
        *(undefined4 *)(unaff_RDI + 0x2c) = uVar1;
        pcVar2 = *(char **)(unaff_RDI + 0x18);
        if (pcVar2 == *(char **)(unaff_RDI + 0x20)) {
          return;
        }
        if (*pcVar2 != ':') {
          return;
        }
        *(char **)(unaff_RDI + 0x18) = pcVar2 + 1;
        FUN_009e8760();
        return;
      }
      *(undefined1 *)(unaff_RDI + 0x34) = 1;
      FUN_009e8012();
      *(undefined1 *)(unaff_RDI + 0x34) = 0;
      pcVar2 = *(char **)(unaff_RDI + 0x18);
      if (pcVar2 == *(char **)(unaff_RDI + 0x20)) {
        return;
      }
      if (*pcVar2 != ':') {
        return;
      }
      *(char **)(unaff_RDI + 0x18) = pcVar2 + 1;
      uVar1 = *(undefined4 *)(unaff_RDI + 0x2c);
      *(undefined4 *)(unaff_RDI + 0x2c) = 5;
      FUN_009e8760();
      *(undefined4 *)(unaff_RDI + 0x2c) = uVar1;
      return;
    }
  }
  *(char **)(unaff_RDI + 0x18) = pcVar2;
LAB_009e8960:
  FUN_009e818c();
  return;
}


