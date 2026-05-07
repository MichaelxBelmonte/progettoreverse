// Function: FUN_018c28f0
// Address: 018c28f0
// Size: 854 bytes
// Class: MUTagOptionAttribute


longlong * FUN_018c28f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  if (*(int *)(*(longlong *)(unaff_RSI + 0x48) + 0xc) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else if (*(longlong *)(unaff_RSI + 0x50) == 0) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_0258a670;
    (*DAT_0258a688)();
    lVar1 = *(longlong *)(unaff_RSI + 0x50);
    *(undefined8 **)(unaff_RSI + 0x50) = puVar2;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    uVar4 = 1;
    FUN_00e38130(1,0,1);
    lVar1 = *(longlong *)(unaff_RSI + 0x48);
    if (lVar1 != 0) {
      local_60 = '\0';
      local_68 = 0;
      local_48 = 0;
      local_50 = 0;
      local_58 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar5 = 0;
        do {
          local_98 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
          local_90 = '\0';
          local_68 = local_98;
          pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_018909c0();
          local_40 = local_78;
          local_38 = 0;
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_38 = '\x01';
          FUN_018c2840();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          lVar5 = lVar5 + 1;
          local_50 = CONCAT44(local_50._4_4_,(int)lVar5);
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
      FUN_017d9900();
    }
    local_88 = *param_2;
    local_80 = '\0';
    FUN_018c2db0();
    lVar1 = local_68;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_60 == '\0') {
      if (local_68 == 0) {
        *unaff_RDI = 0;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *unaff_RDI = lVar1;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *unaff_RDI = local_68;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      local_60 = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8 = *param_2;
    local_a0 = '\0';
    FUN_018c2db0(param_1,&local_a8);
    lVar1 = local_68;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_60 == '\0') {
      if (local_68 == 0) {
        *unaff_RDI = 0;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *unaff_RDI = lVar1;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *unaff_RDI = local_68;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      local_60 = '\0';
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


