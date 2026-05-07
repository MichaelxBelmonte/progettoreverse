// Function: FUN_01a82400
// Address: 01a82400
// Size: 908 bytes
// Class: Unknown

void* FUN_01a82400(uint64_t param_1,uint64_t param_2)

{
  double dVar1;
  int64_t *plVar2;
  void *pvVar3;
  void* in_ECX;
  void*this_ptr;
  int64_t lVar4;
  int64_t *plVar5;
  float fVar6;
  uint32_t uVar7;
  float fVar8;
  int64_t *local_90;
  char local_88;
  double local_80;
  int64_t *local_78;
  uint64_t local_70;
  uint64_t local_68;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  uint32_t local_38;
  
  uVar7 = (uint32_t)((uint64_t)param_1 >> 0x20);
  fVar6 = (float)((uint64_t)param_2 >> 0x20);
  local_68 = (int64_t *)CONCAT44(uVar7,uVar7);
  FUN_01e3f820();
  if ((g_02390d30 + fVar6 * g_0239011c < SUB84(local_68,0)) ||
     (fVar6 = fVar6 * g_0239011c + g_023b8b2c, SUB84(local_68,0) < fVar6)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  FUN_01989f80(fVar6,local_68);
  plVar5 = local_58;
  if ((((local_50 == '\0') && (local_58 != (int64_t *)0x0)) && (FUN_00d50b00(), local_50 != '\0'))
     && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = plVar5;
  FUN_01a82280();
  plVar2 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_01a82766;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (int64_t *)0x0) {
LAB_01a82766:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto joined_r0x01a82775;
  }
  local_70 = (uint64_t)*(uint *)((int64_t)plVar2 + 0xc);
  local_50 = '\0';
  local_58 = (int64_t *)0x0;
  local_48 = plVar2;
  local_38 = 0;
  local_40 = 0;
  if (0 < *(int *)((int64_t)plVar2 + 0xc)) {
    local_70 = (uint64_t)(*(uint *)((int64_t)plVar2 + 0xc) - 1);
    lVar4 = 0;
    local_78 = plVar2;
    do {
      plVar5 = *(int64_t **)(local_78[2] + lVar4 * 8);
      local_58 = plVar5;
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013faed0();
      local_80 = (double)FUN_0128e5a0();
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar1 = (double)FUN_0125a280();
      uVar7 = (**(code **)(*local_68 + 0x938))(SUB84(local_80 + dVar1,0));
      local_80 = (double)CONCAT44(local_80._4_4_,uVar7);
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a280();
      fVar6 = (float)(**(code **)(*local_68 + 0x938))();
      fVar8 = (local_80._0_4_ - fVar6) + g_023b8b2c;
      if (((fVar8 < (float)param_1) && ((float)param_1 < (local_80._0_4_ - fVar6) + g_02390d30))
         && (((int)lVar4 != 0 && ((int)local_70 != (int)lVar4)))) {
        local_88 = '\0';
        local_90 = plVar5;
        FUN_01a82870(fVar8,&local_90);
        plVar5 = local_68;
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01a81420();
        goto LAB_01a82757;
      }
      lVar4 = lVar4 + 1;
      local_40 = CONCAT44(local_40._4_4_,(int)lVar4);
    } while ((int)lVar4 < *(int *)((int64_t)local_78 + 0xc));
  }
  FUN_01a81420();
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  plVar5 = local_68;
LAB_01a82757:
  FUN_00d50b20();
joined_r0x01a82775:
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

