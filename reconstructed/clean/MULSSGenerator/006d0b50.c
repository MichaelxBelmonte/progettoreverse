// Function: FUN_006d0b50
// Address: 006d0b50
// Size: 1195 bytes
// Class: MULSSGenerator

void* FUN_006d0b50(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  void*this_ptr;
  int iVar7;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d0;
  char local_c8;
  int64_t local_b0;
  char local_a8;
  int64_t local_90;
  char local_88 [16];
  uint64_t local_78;
  uint32_t local_70;
  void*local_68;
  int64_t local_60;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar6 = &g_02572358;
  *puVar3 = &g_02572358;
  local_68 = puVar3;
  (*g_02572370)();
  FUN_006cb500();
  if (local_50 != 0) {
    FUN_006cb500();
    if (*(int *)(local_108 + 0xc) == 0) {
      cVar2 = '\0';
    }
    else {
      FUN_006cb500();
      local_60 = local_f8;
      FUN_00d23310();
      local_40[0] = local_88[0];
      pcVar4 = local_40;
      if (local_88[0] != '\0') {
        pcVar4 = local_88;
      }
      *pcVar4 = '\0';
      if ((local_88[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific((void*)pcVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      if (local_d0 == 0) {
        cVar2 = '\0';
      }
      else {
        FUN_006cb500();
        local_58 = local_e8;
        FUN_00d23310();
        pcVar6 = local_38;
        pcVar4 = local_88;
        if (local_88[0] == '\0') {
          pcVar4 = pcVar6;
        }
        local_38[0] = local_88[0];
        *pcVar4 = '\0';
        if ((local_88[0] != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific((void*)pcVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
        pvVar5 = _pthread_getspecific((void*)pcVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_012ccc80();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_100 != '\0') {
      FUN_00d50b20();
    }
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') goto LAB_006d0fea;
  }
  FUN_006cb500();
  if (local_88[0] == '\0') {
    if (local_90 == 0) goto LAB_006d0fea;
    FUN_00d50b00();
  }
  else if (local_90 == 0) goto LAB_006d0fea;
  local_88[0] = '\0';
  local_70 = 0;
  local_78 = 0;
  if (0 < *(int *)(local_90 + 0xc)) {
    iVar7 = 0;
    do {
      pvVar5 = _pthread_getspecific((void*)pcVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      lVar1 = local_50;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_004f9670();
        lVar1 = local_50;
        if (local_48 == '\0') {
          if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = '\0';
        }
        if (lVar1 != 0) {
          local_48 = '\0';
          local_50 = lVar1;
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      iVar7 = iVar7 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar7);
    } while (iVar7 < *(int *)(local_90 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_006d0fea:
  *this_ptr = local_68;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

