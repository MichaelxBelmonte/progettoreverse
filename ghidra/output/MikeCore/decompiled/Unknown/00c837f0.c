// Function: FUN_00c837f0
// Address: 00c837f0
// Size: 695 bytes
// Class: Unknown


undefined8 * FUN_00c837f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar4;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  int local_48;
  undefined8 local_44;
  longlong *local_38;
  
  local_38 = param_2;
  if (*(char *)(unaff_RSI + 0x49) == '\0') {
    lVar1 = *(longlong *)(unaff_RSI + 0x28);
    if (lVar1 != 0) {
      local_58 = '\0';
      local_60 = (longlong *)0x0;
      local_44 = 0;
      lVar4 = 0;
      local_50 = lVar1;
      while (local_48 = (int)lVar4, local_48 < *(int *)(lVar1 + 0xc)) {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar4 * 8);
        local_60 = plVar2;
        FUN_00d74120();
        if (local_a8 == 0) {
          cVar3 = '\0';
        }
        else {
          FUN_00d74120();
          local_70 = *local_38;
          local_68 = '\0';
          cVar3 = (**(code **)(*local_98 + 0x50))();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
        if (cVar3 != '\0') {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          *unaff_RDI = plVar2;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          FUN_00cc1480();
          return unaff_RDI;
        }
      }
      FUN_00cc1480();
    }
    FUN_00c80a40();
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_00c83a5e;
      }
    }
    else if (local_60 != (longlong *)0x0) {
LAB_00c83a5e:
      local_b8 = *local_38;
      local_b0 = 0;
      FUN_00c837f0(param_1,&local_b8);
      FUN_00d50b20();
      return unaff_RDI;
    }
  }
  else {
    if (*(longlong *)(unaff_RSI + 0x90) == 0) {
      FUN_00c83bf0();
    }
    local_80 = *local_38;
    local_78 = '\0';
    FUN_00c84100(param_1,&local_80);
    plVar2 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x368))();
      if (cVar3 != '\0') {
        *unaff_RDI = plVar2;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        return unaff_RDI;
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      FUN_00d50b20();
      return unaff_RDI;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


