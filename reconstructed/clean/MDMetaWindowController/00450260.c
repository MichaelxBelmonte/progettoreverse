// Function: FUN_00450260
// Address: 00450260
// Size: 2021 bytes
// Class: MDMetaWindowController

void FUN_00450260(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  char *pcVar3;
  void* pVar4;
  int64_t lVar5;
  int iVar6;
  int64_t this_ptr;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_d8;
  char local_d0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  uint64_t local_90;
  int local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  if (*(int64_t *)(this_ptr + 0x240) != 0) {
    local_a0 = 0;
    local_a8 = 0;
    local_90 = 0xffffffff;
    local_88 = 0;
    local_90._4_4_ = 0;
    local_98 = *(int64_t *)(this_ptr + 0x240);
    while( true ) {
      if (local_90._4_4_ != 0) {
        if (local_90._4_4_ < 1) {
          iVar6 = -local_90._4_4_;
        }
        else {
          iVar6 = (int)local_90 - local_90._4_4_;
          local_90 = CONCAT44(local_90._4_4_,iVar6);
          FUN_00d23690();
          local_88 = local_88 + local_90._4_4_;
          iVar6 = 0;
        }
        local_90 = CONCAT44(iVar6,(int)local_90);
      }
      lVar1 = (int64_t)(int)local_90;
      iVar6 = (int)local_90 + 1;
      local_90 = CONCAT44(local_90._4_4_,iVar6);
      if (*(int *)(local_98 + 0xc) <= iVar6) break;
      lVar5 = *(int64_t *)(local_98 + 0x10);
      local_a8 = *(int64_t *)(lVar5 + 8 + lVar1 * 8);
      pvVar2 = _pthread_getspecific((void*)lVar5);
      pVar4 = (void*)lVar5;
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar1 = FUN_00e8b990();
      if (lVar1 != 0) {
        FUN_00d50b00();
        lVar1 = g_02705ef0;
        if (g_02705ef0 != 0) {
          FUN_00d50b00();
        }
        local_178 = lVar1;
        local_170 = '\x01';
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar1 = FUN_00e8b990();
        local_d0 = 0;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_d0 = '\x01';
        local_d8 = lVar1;
        FUN_000823a0();
        FUN_00e86210();
        lVar1 = g_02705ef8;
        if (g_02705ef8 != 0) {
          FUN_00d50b00();
        }
        local_168 = lVar1;
        local_160 = '\x01';
        FUN_00c841b0();
        local_80 = local_f8;
        local_78 = 0;
        if (local_f0 == '\0') {
          if (local_f8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_f0 = '\0';
        }
        local_78 = '\x01';
        local_158 = local_a8;
        local_150 = '\0';
        FUN_000bfbc0(&local_d8,&local_178,0xa0,&local_80);
        lVar1 = CONCAT71(uStack_4f,local_50);
        if (local_48 == '\0') {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_38[0] = '\0';
        local_40 = lVar1;
        FUN_00d21140();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_160 != '\0') && (local_168 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_170 != '\0') && (local_178 != 0)) {
          FUN_00d50b20();
        }
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        FUN_00d23340();
        lVar1 = local_40;
        local_50 = local_38[0];
        pcVar3 = local_38;
        if (local_38[0] == '\0') {
          pcVar3 = &local_50;
        }
        *pcVar3 = '\0';
        if ((local_38[0] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        FUN_000823a0();
        FUN_00e86210();
        lVar5 = g_027295f0;
        if (g_027295f0 != 0) {
          FUN_00d50b00();
        }
        local_148 = lVar5;
        local_140 = '\x01';
        FUN_00c841b0();
        lVar5 = local_40;
        local_68 = 0;
        if (local_38[0] == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        local_68 = '\x01';
        local_70 = lVar5;
        local_138 = local_a8;
        local_130 = '\0';
        FUN_000bfd00();
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    lVar1 = local_98;
    FUN_000be170();
    param_1 = (void*)lVar1;
  }
  if (*(int64_t *)(this_ptr + 600) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar1 = FUN_00e8b990();
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_128 = g_02705ef0;
      if (g_02705ef0 != 0) {
        FUN_00d50b00();
      }
      local_120 = '\x01';
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_b8 = FUN_00e8b990();
      local_b0 = 0;
      if (local_b8 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      FUN_000e3450();
      FUN_00e86210();
      local_118 = g_027295e0;
      if (g_027295e0 != 0) {
        FUN_00d50b00();
      }
      local_110 = '\x01';
      FUN_00c841b0();
      local_58 = 0;
      local_60 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_58 = '\x01';
      local_100 = '\0';
      local_108 = 0;
      FUN_000bfbc0(&local_b8,&local_128,0xa0,&local_60);
      lVar1 = local_40;
      if (local_38[0] == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_a8 = lVar1;
      local_a0 = '\0';
      FUN_00d21140();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

