// Function: FUN_000c4430
// Address: 000c4430
// Size: 647 bytes
// Class: GNRootView


/* WARNING: Removing unreachable block (ram,0x000c4686) */
/* WARNING: Removing unreachable block (ram,0x000c468f) */

void FUN_000c4430(void)

{
  longlong *plVar1;
  char cVar2;
  char *pcVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  FUN_00ca1380();
  plVar1 = local_40;
  local_50 = local_38[0];
  pcVar3 = local_38;
  if (local_38[0] == '\0') {
    pcVar3 = &local_50;
  }
  *pcVar3 = '\0';
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_40 = (longlong *)*unaff_RSI;
  local_38[0] = '\0';
  cVar2 = FUN_00d23d70();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    if (unaff_RDI[0x2a] != 0) {
      FUN_00ca1380();
      plVar1 = local_40;
      pcVar3 = local_38;
      if (local_38[0] == '\0') {
        pcVar3 = &local_50;
      }
      local_50 = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_40 = (longlong *)*unaff_RSI;
      local_38[0] = '\0';
      cVar2 = FUN_00d24090();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        local_40 = (longlong *)*unaff_RSI;
        local_38[0] = '\0';
        FUN_00ca1990();
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    (**(code **)(*unaff_RDI + 0x720))();
    if (CONCAT71(uStack_4f,local_50) == 0) {
      cVar2 = '\0';
    }
    else {
      (**(code **)(*unaff_RDI + 0x720))();
      (**(code **)(*local_78 + 0x618))();
      local_40 = (longlong *)*unaff_RSI;
      local_38[0] = '\0';
      cVar2 = FUN_00d24090();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (**(code **)(*unaff_RDI + 0x720))();
      (**(code **)(*local_40 + 0x5f8))();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


