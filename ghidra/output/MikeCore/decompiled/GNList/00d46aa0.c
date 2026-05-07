// Function: FUN_00d46aa0
// Address: 00d46aa0
// Size: 608 bytes
// Class: GNList


void FUN_00d46aa0(void)

{
  bool bVar1;
  undefined8 *puVar2;
  char *pcVar3;
  longlong lVar4;
  int unaff_ESI;
  undefined8 *unaff_RDI;
  int iVar5;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_ESI + 1U < 0x22) {
    if ((DAT_028a7780 == 0) || (DAT_028a7789 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a7780 == 0) {
        FUN_00d46850();
        lVar4 = DAT_028a7780;
        if (DAT_028a7780 != local_48) {
          if (local_40[0] == '\0') {
            if (local_48 == 0) {
              lVar4 = 0;
            }
            else {
              FUN_00d50b00();
              lVar4 = local_48;
            }
          }
          else {
            local_40[0] = '\0';
            lVar4 = local_48;
          }
          bVar1 = DAT_028a7780 != 0;
          DAT_028a7780 = lVar4;
          if (bVar1) {
            FUN_00d50b20();
            lVar4 = local_48;
          }
        }
        if ((lVar4 != 0) && (DAT_028a7788 == '\0')) {
          DAT_028a7788 = '\x01';
          FUN_00e8cb90();
          lVar4 = local_48;
        }
        if ((local_40[0] != '\0') && (lVar4 != 0)) {
          FUN_00d50b20();
        }
        iVar5 = -1;
        do {
          puVar2 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar2 = &DAT_02575d80;
          FUN_00d500e0();
          local_40[0] = '\0';
          FUN_00d21140();
          if ((local_40[0] != '\0') && (puVar2 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          FUN_00d23340();
          local_38[0] = local_40[0];
          pcVar3 = local_40;
          if (local_40[0] == '\0') {
            pcVar3 = local_38;
          }
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (puVar2 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          *(undefined1 *)((longlong)puVar2 + 0xc) = 0x69;
          *(int *)(puVar2 + 2) = iVar5;
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x21);
        DAT_028a7789 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a7789 = '\x01';
        FUN_00e8cb70();
      }
    }
    puVar2 = *(undefined8 **)
              (*(longlong *)(DAT_028a7780 + 0x10) + (longlong)(int)(unaff_ESI + 1U) * 8);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02575d80;
    FUN_00d500e0();
    *(undefined1 *)((longlong)puVar2 + 0xc) = 0x69;
    *(int *)(puVar2 + 2) = unaff_ESI;
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


