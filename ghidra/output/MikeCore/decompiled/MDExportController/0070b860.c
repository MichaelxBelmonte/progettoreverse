// Function: FUN_0070b860
// Address: 0070b860
// Size: 1286 bytes
// Class: MDExportController


/* WARNING: Removing unreachable block (ram,0x0070b972) */
/* WARNING: Removing unreachable block (ram,0x0070b97e) */
/* WARNING: Removing unreachable block (ram,0x0070bb89) */
/* WARNING: Removing unreachable block (ram,0x0070bb95) */
/* WARNING: Removing unreachable block (ram,0x0070bc40) */
/* WARNING: Removing unreachable block (ram,0x0070bc4c) */

void FUN_0070b860(void)

{
  longlong lVar1;
  longlong *plVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong *plVar6;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  undefined8 local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  char local_41;
  longlong *local_40;
  char local_38;
  
  FUN_007f2390();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  local_80 = 0;
  local_41 = '\0';
  FUN_01e561b0();
  local_78 = local_68;
  local_70 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_70 = '\x01';
  plVar5 = &local_78;
  FUN_007f3210(plVar5,&local_80,&local_41);
  plVar6 = local_40;
  pVar4 = (pthread_key_t)plVar5;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) {
    FUN_007f32f0();
    goto LAB_0070bd3f;
  }
  if (local_41 != '\0') {
    FUN_01f27fe0();
    (**(code **)(*local_40 + 0x560))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((longlong *)*unaff_RSI != (longlong *)0x0) {
    (**(code **)(&UNK_00001668 + *(longlong *)*unaff_RSI))();
    plVar5 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_016cbba0();
      plVar5 = local_40;
      plVar2 = plVar6;
      if (plVar6 == local_40) {
joined_r0x0070bb4d:
        plVar5 = plVar2;
        if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar2 = plVar5;
          plVar6 = local_40;
          goto joined_r0x0070bb4d;
        }
        FUN_00d50b20();
        local_38 = '\0';
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016ea7c0(local_80);
      (**(code **)(&UNK_00001668 + *(longlong *)*unaff_RSI))();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d960();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      lVar1 = DAT_027ebe30;
      if (DAT_027ebe30 != 0) {
        FUN_00d50b00();
      }
      local_a8 = '\0';
      local_a0 = 0;
      local_98 = '\0';
      local_b0 = plVar5;
      FUN_00d40470(&local_a0,&local_b0,3,3);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      plVar6 = plVar5;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0070bd3f;
    }
  }
  local_90 = plVar6;
  local_88 = '\0';
  FUN_006f3f00();
  FUN_00757c60();
  local_58 = local_40;
  local_50 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_50 = '\x01';
  FUN_01c77060(local_80,1);
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_0070bd3f:
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


