// Function: FUN_00db32a0
// Address: 00db32a0
// Size: 627 bytes
// Class: GNOA


void FUN_00db32a0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int *)(unaff_RDI + 0x34) == 0) {
    FUN_00db98a0();
    iVar1 = *(int *)(local_48 + 0xc);
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 != 0) {
      local_48 = *(longlong *)(unaff_RDI + 0x20);
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      local_40[0] = '\0';
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      plVar5 = (longlong *)FUN_000679b0();
      (**(code **)(*plVar5 + 0x18))();
      plVar2 = *(longlong **)(unaff_RDI + 0x20);
      if (plVar2 == plVar5) {
        FUN_00d50b20();
      }
      else {
        *(longlong **)(unaff_RDI + 0x20) = plVar5;
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      lVar3 = *(longlong *)(unaff_RDI + 0x28);
      if (lVar3 != 0) {
        local_40[0] = '\0';
        cVar4 = FUN_00d24090();
        if ((local_40[0] != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        local_48 = lVar3;
        if (cVar4 != '\0') {
          *(undefined8 *)(unaff_RDI + 0x28) = 0;
        }
      }
      FUN_00d216c0();
      if (*(int *)(unaff_RDI + 0xc) < *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0xc)) {
        do {
          if (*(longlong *)(unaff_RDI + 0x28) != 0) {
            FUN_00d23310();
            local_38[0] = local_40[0];
            pcVar6 = local_40;
            if (local_40[0] == '\0') {
              pcVar6 = local_38;
            }
            *pcVar6 = '\0';
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            lVar3 = *(longlong *)(unaff_RDI + 0x28);
            if ((local_38[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_48 == lVar3) {
              *(undefined8 *)(unaff_RDI + 0x28) = 0;
            }
          }
          FUN_00d23620();
          *(undefined1 *)(unaff_RDI + 0x39) = 1;
        } while (*(int *)(unaff_RDI + 0xc) < *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0xc));
      }
      FUN_00d403d0();
      lVar3 = DAT_026e0f70;
      if (DAT_026e0f70 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_68 = 0;
      local_60 = '\0';
      FUN_00d40470(&local_68,&stack0xffffffffffffffa8,3,3);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d216c0();
  }
  return;
}


