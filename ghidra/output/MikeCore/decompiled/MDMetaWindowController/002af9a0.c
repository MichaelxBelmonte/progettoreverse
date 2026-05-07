// Function: FUN_002af9a0
// Address: 002af9a0
// Size: 571 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x002afb66) */
/* WARNING: Removing unreachable block (ram,0x002afb72) */

void FUN_002af9a0(void)

{
  longlong *plVar1;
  char cVar2;
  char *pcVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong local_88;
  char local_80 [16];
  undefined8 local_70;
  undefined4 local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  longlong local_50;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  (**(code **)(*(longlong *)*unaff_RSI + 0x610))();
  FUN_00d23310();
  local_60 = local_80[0];
  pcVar3 = local_80;
  if (local_80[0] == '\0') {
    pcVar3 = &local_60;
  }
  *pcVar3 = '\0';
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_38[0] = local_60 != '\0';
  pcVar3 = &local_60;
  if (!(bool)local_38[0]) {
    pcVar3 = local_38;
  }
  *pcVar3 = '\0';
  if ((local_60 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x5e8))();
  local_50 = local_88;
  if (local_80[0] == '\0') {
    if (local_88 == 0) goto LAB_002afbc1;
    FUN_00d50b00();
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_88 == 0) goto LAB_002afbc1;
  local_80[0] = '\0';
  local_68 = 0;
  local_70 = 0;
  if (0 < *(int *)(local_88 + 0xc)) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(local_88 + 0x10) + lVar4 * 8);
      (**(code **)(*plVar1 + 0x5f8))();
      local_48 = local_50;
      local_40 = '\0';
      cVar2 = FUN_00d23d70();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        (**(code **)(*plVar1 + 0x5d0))();
        FUN_01e56750();
        FUN_01e5d9c0();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar4 = lVar4 + 1;
      local_70 = CONCAT44(local_70._4_4_,(int)lVar4);
    } while ((int)lVar4 < *(int *)(local_88 + 0xc));
  }
  FUN_00097d00();
  FUN_00d50b20();
LAB_002afbc1:
  if ((local_38[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}


