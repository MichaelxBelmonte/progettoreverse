// Function: FUN_01946d20
// Address: 01946d20
// Size: 1646 bytes
// Class: Unknown

void FUN_01946d20(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int iVar4;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t local_128;
  uint8_t local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_40;
  char local_38;
  
  cVar1 = FUN_019415b0();
  if (cVar1 != unaff_SIL) {
    if (unaff_SIL != '\0') {
      (**(code **)(*this_ptr + 0x970))();
      local_118 = g_026f6f70;
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_02729588;
      local_110 = '\x01';
      if (g_02729588 != 0) {
        FUN_00d50b00();
      }
      local_108 = lVar3;
      local_100 = '\x01';
      local_f8 = 0;
      local_f0 = '\0';
      FUN_00d31230(&local_f8,&local_108);
      lVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_0197ce50();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_e8 = g_02729590;
      if (g_02729590 != 0) {
        FUN_00d50b00();
      }
      local_e0 = '\x01';
      (**(code **)(&UNK_00001668 + *this_ptr))();
      local_88 = local_40;
      local_80 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_80 = '\x01';
      param_1 = (void*)&local_88;
      FUN_00d41430();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(&UNK_00001668 + *this_ptr))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013901e0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    lVar3 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_60 = '\0';
      local_68 = 0;
      local_58 = lVar3;
      local_50 = 0xffffffff;
      local_48 = 0;
      while( true ) {
        lVar3 = (int64_t)(int)local_50;
        iVar4 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar4);
        if (*(int *)(local_58 + 0xc) <= iVar4) break;
        local_128 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + 8 + lVar3 * 8);
        local_120 = 0;
        local_68 = local_128;
        FUN_01947890(*(int64_t *)(local_58 + 0x10),&local_128);
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar4 = -local_50._4_4_;
          }
          else {
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar4 = 0;
          }
          local_50 = CONCAT44(iVar4,(int)local_50);
        }
      }
      FUN_000be170();
      FUN_00d50b20();
    }
    if (unaff_SIL != '\0') {
      FUN_00d403d0();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar3 = g_02729590;
      if (g_02729590 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar3;
      local_d0 = '\x01';
      (**(code **)(&UNK_00001668 + *this_ptr))();
      local_78 = local_40;
      local_70 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      FUN_00d41040(&local_78,&local_d8);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x970))();
      local_c8 = 0;
      local_c0 = '\0';
      FUN_0197ce50();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x970))();
      FUN_0197c970();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

