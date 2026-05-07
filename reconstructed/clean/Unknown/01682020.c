// Function: FUN_01682020
// Address: 01682020
// Size: 1499 bytes
// Class: Unknown

void FUN_01682020(void* param_1,uint64_t param_2,uint32_t param_3)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  char *pcVar6;
  int64_t local_f0;
  char local_e8;
  int64_t local_b0;
  char local_a8;
  uint32_t local_9c;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70 [8];
  int64_t local_68;
  char local_60;
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_40;
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
    lVar3 = (int64_t)(int)local_50;
    iVar5 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar5);
    lVar4 = local_58;
    if (*(int *)(local_58 + 0xc) <= iVar5) break;
    lVar4 = *(int64_t *)(local_58 + 0x10);
    local_68 = *(int64_t *)(lVar4 + 8 + lVar3 * 8);
    pvVar2 = _pthread_getspecific((void*)lVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_01326de0();
    if (iVar5 == 0) {
      pvVar2 = _pthread_getspecific((void*)lVar4);
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
        lVar4 = CONCAT71((int7)((uint64_t)lVar4 >> 8),local_70[0]);
        pcVar6 = local_38;
        if (local_70[0] != '\0') {
          pcVar6 = local_70;
        }
        local_38[0] = local_70[0];
        *pcVar6 = '\0';
        if ((local_70[0] != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        pvVar2 = _pthread_getspecific((void*)lVar4);
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
  param_1 = (void*)lVar4;
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

