// Function: FUN_0183d890
// Address: 0183d890
// Size: 817 bytes
// Class: Unknown


void FUN_0183d890(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong *in_RCX;
  longlong *in_RDX;
  longlong *unaff_RDI;
  longlong *in_R8;
  longlong lVar5;
  undefined4 uVar6;
  longlong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*unaff_RDI != 0) {
    local_b8 = in_R8;
    local_b0 = in_RCX;
    local_a8 = in_RDX;
    local_70 = param_4;
    local_6c = param_3;
    local_68 = param_2;
    local_64 = param_1;
    pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01327a50();
    local_50 = local_60;
    local_48 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_48 = '\x01';
    uVar6 = FUN_0147ce20();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        uVar6 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      if ((*(int *)(lVar2 + 0xc) != 0) && (FUN_00d242c0(uVar6,0), 0 < *(int *)(lVar2 + 0xc))) {
        lVar5 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar5 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pVar4 = (pthread_key_t)in_RCX;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_0183da80;
            }
          }
          else if (local_40 != 0) {
LAB_0183da80:
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_a0 = *local_a8;
            local_98 = '\0';
            local_90 = *local_b0;
            local_88 = '\0';
            local_80 = *local_b8;
            local_78 = '\0';
            in_RCX = &local_c0;
            FUN_014c7490(local_64,local_68,local_6c,local_70);
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(lVar2 + 0xc));
      }
      FUN_00d50b20();
    }
  }
  return;
}


