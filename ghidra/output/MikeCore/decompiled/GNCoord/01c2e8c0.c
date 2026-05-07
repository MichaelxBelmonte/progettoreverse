// Function: FUN_01c2e8c0
// Address: 01c2e8c0
// Size: 939 bytes
// Class: GNCoord


void FUN_01c2e8c0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
    lVar2 = *(longlong *)(unaff_RSI + 0x20);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar2 = *(longlong *)(lVar2 + 0x30);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    FUN_01c2f170();
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      param_2 = &DAT_02802688;
    }
    plVar1 = (longlong *)*param_2;
    cVar4 = (char)param_2[1];
    if ((cVar4 == '\0') || (plVar1 == (longlong *)0x0)) {
      if (plVar1 == (longlong *)0x0) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        return;
      }
    }
    else {
      FUN_00d50b00();
    }
    lVar2 = plVar1[6];
    if (*(int *)(lVar2 + 0xc) == 0) {
      plVar5 = (longlong *)FUN_01c2a780();
      (**(code **)(*plVar5 + 0x18))();
      local_60 = plVar5;
      FUN_01c110f0();
      local_90 = local_48;
      local_88 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_88 = '\x01';
      FUN_01c1a300();
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027d3810;
      if (DAT_027d3810 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_0277cbb0;
      if (DAT_0277cbb0 != 0) {
        FUN_00d50b00();
      }
      local_b0 = lVar3;
      local_a8 = '\x01';
      (**(code **)(*plVar1 + 0x368))();
      local_70 = local_58;
      local_68 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_68 = '\x01';
      FUN_00d14780(&local_70,&local_b0);
      local_80 = local_48;
      local_78 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_78 = '\x01';
      FUN_01c1a370();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_01c110c0();
      FUN_00d23310();
      pcVar6 = local_38;
      if (local_40[0] != '\0') {
        pcVar6 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar6 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_a0 = local_60;
      local_98 = '\0';
      (**(code **)(*local_48 + 0x368))();
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (cVar4 != '\0') {
        FUN_00d50b20();
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      FUN_00d50b00();
      *unaff_RDI = lVar2;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (cVar4 != '\0') {
        FUN_00d50b20();
      }
    }
  }
  return;
}


