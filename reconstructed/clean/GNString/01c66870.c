// Function: FUN_01c66870
// Address: 01c66870
// Size: 1494 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c66870(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t *plVar3;
  int64_t lVar4;
  void* in_ECX;
  void* pVar5;
  int64_t lVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t *this_ptr;
  uint32_t uVar9;
  uint64_t uVar10;
  int64_t local_d0;
  char local_c8;
  uint8_t uVar11;
  int64_t local_b0;
  uint8_t local_a8;
  int64_t *local_a0;
  char local_98;
  uint64_t local_90;
  uint64_t local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  int64_t local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  local_88 = param_1;
  uVar10 = (**(code **)(*this_ptr + 0x620))();
  *(void*)(this_ptr + 0x3a) = 1;
  if ((int)this_ptr[0x39] == 0) {
    local_80 = this_ptr + 0x54;
    lVar1 = this_ptr[0x54];
    if (*(int64_t *)(lVar1 + 0x38) != 0) {
      lVar4 = this_ptr[0x31];
      if (lVar4 != 0) {
        FUN_00d50b00();
        lVar1 = *local_80;
      }
      lVar1 = *(int64_t *)(lVar1 + 0x18);
      local_60 = lVar4;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = this_ptr[0x31];
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c2660();
      local_68 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      plVar3 = (int64_t *)FUN_000bea40();
      (**(code **)(*plVar3 + 0x18))();
      if (local_68 != (int64_t *)0x0) {
        local_50 = '\0';
        local_58 = (int64_t *)0x0;
        local_48 = local_68;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        while( true ) {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar7 = -local_40._4_4_;
            }
            else {
              iVar7 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar7);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar7 = 0;
            }
            local_40 = CONCAT44(iVar7,(int)local_40);
          }
          lVar4 = (int64_t)(int)local_40;
          iVar7 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar7);
          if (*(int *)((int64_t)local_48 + 0xc) <= iVar7) break;
          lVar6 = local_48[2];
          local_58 = *(int64_t **)(lVar6 + 8 + lVar4 * 8);
          pvVar2 = _pthread_getspecific((void*)lVar6);
          pVar5 = (void*)lVar6;
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_88 = FUN_01907950();
          pvVar2 = _pthread_getspecific(pVar5);
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            pVar5 = (void*)local_60;
          }
          local_90 = FUN_016c25f0(local_88);
          pvVar2 = _pthread_getspecific(pVar5);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_90 = FUN_016c26c0(local_90);
          pvVar2 = _pthread_getspecific(pVar5);
          plVar8 = plVar3;
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            plVar8 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar8 + 0x418))(local_90,local_88);
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_000beb10();
      }
      local_98 = '\0';
      local_a0 = plVar3;
      (**(code **)(**(int64_t **)(*local_80 + 0x30) + 0x3f8))();
      lVar4 = local_60;
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (this_ptr[0x2c] != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        plVar3 = (int64_t *)this_ptr[0x2c];
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar3 + 0x620))();
        FUN_00d50b20();
      }
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (this_ptr[0x2d] == 0) {
      plVar3 = *(int64_t **)(*local_80 + 0x28);
      goto joined_r0x01c66e4a;
    }
    FUN_00d50b00();
    FUN_00d50b20();
    plVar3 = (int64_t *)this_ptr[0x2d];
    FUN_00d50b00();
    plVar8 = (int64_t *)this_ptr[0x2d];
    FUN_00d50b00();
    (**(code **)(*plVar8 + 0xf08))();
    uVar9 = (**(code **)(*plVar3 + 0x938))();
    *(void*)((int64_t)this_ptr + 0x254) = uVar9;
    FUN_00d50b20();
    FUN_00d50b20();
    plVar3 = local_80;
  }
  else {
    if (this_ptr[0x2d] != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = this_ptr[0x2d];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00d470c0(local_88);
      local_78 = local_58;
      local_70 = 0;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_70 = '\x01';
      uVar10 = FUN_019f1280();
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      if (lVar1 != 0) {
        uVar10 = FUN_00d50b20();
      }
    }
    lVar1 = *(int64_t *)(this_ptr[0x54] + 0x18);
    if (lVar1 != 0) {
      uVar10 = FUN_00d50b00();
    }
    uVar11 = 1;
    lVar4 = this_ptr[0x31];
    if (lVar4 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_a8 = 1;
    local_b0 = lVar4;
    FUN_01c64c20(uVar10,&local_b0,param_3,param_4,uVar11);
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    plVar3 = this_ptr + 0x54;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  plVar3 = *(int64_t **)(*plVar3 + 0x28);
joined_r0x01c66e4a:
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x3a0))();
    (**(code **)(*local_58 + 0x410))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

