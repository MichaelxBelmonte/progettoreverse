// Function: FUN_01682020
// Address: 01682020
// Size: 1499 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01682356) */
/* WARNING: Removing unreachable block (ram,0x01682362) */
/* WARNING: Removing unreachable block (ram,0x016823c7) */
/* WARNING: Removing unreachable block (ram,0x016823d3) */

void FUN_01682020(pthread_key_t param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  longlong local_f0;
  char local_e8;
  longlong local_b0;
  char local_a8;
  undefined4 local_9c;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70 [8];
  longlong local_68;
  char local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong local_40;
  char local_38 [8];
  
  local_9c = param_3;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016670b0();
  lVar1 = local_68;
  if (local_60 == '\0') {
    if (local_68 == 0) {
      return;
    }
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124c6e0();
  lVar4 = local_68;
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_01682384;
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == 0) goto LAB_01682384;
  local_60 = '\0';
  local_68 = 0;
  local_58 = lVar4;
  local_50 = 0xffffffff;
  local_48 = 0;
  while( true ) {
    lVar3 = (longlong)(int)local_50;
    iVar5 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar5);
    lVar4 = local_58;
    if (*(int *)(local_58 + 0xc) <= iVar5) break;
    lVar4 = *(longlong *)(local_58 + 0x10);
    local_68 = *(longlong *)(lVar4 + 8 + lVar3 * 8);
    pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_01326de0();
    if (iVar5 == 0) {
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01328c30();
      lVar3 = local_78;
      if ((((local_70[0] == '\0') && (local_78 != 0)) && (FUN_00d50b00(), local_70[0] != '\0')) &&
         (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (*(int *)(lVar3 + 0xc) != 0) {
        local_40 = lVar1;
        FUN_00d23310();
        lVar1 = local_78;
        lVar4 = CONCAT71((int7)((ulonglong)lVar4 >> 8),local_70[0]);
        pcVar6 = local_38;
        if (local_70[0] != '\0') {
          pcVar6 = local_70;
        }
        local_38[0] = local_70[0];
        *pcVar6 = '\0';
        if ((local_70[0] != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc240();
        lVar3 = local_98;
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        if (((lVar3 == 0) && (FUN_01416f10(), local_e8 != '\0')) && (local_f0 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      break;
    }
    if (local_50._4_4_ != 0) {
      if (local_50._4_4_ < 1) {
        iVar5 = -local_50._4_4_;
      }
      else {
        local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
        FUN_00d23690();
        local_48 = local_48 + local_50._4_4_;
        iVar5 = 0;
      }
      local_50 = CONCAT44(iVar5,(int)local_50);
    }
  }
  param_1 = (pthread_key_t)lVar4;
  FUN_00115190();
  FUN_00d50b20();
LAB_01682384:
  FUN_0141af60();
  lVar1 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0141bd20();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016676f0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  local_88 = local_78;
  local_80 = 0;
  if (local_70[0] == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70[0] = '\0';
  }
  local_80 = '\x01';
  local_b0 = lVar1;
  local_a8 = '\0';
  FUN_0147f490(0,&local_b0,1,0);
  lVar4 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70[0] != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


