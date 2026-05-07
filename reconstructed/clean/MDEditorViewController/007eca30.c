// Function: FUN_007eca30
// Address: 007eca30
// Size: 2166 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_007eca30(void)

{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t this_ptr;
  int64_t lVar9;
  int64_t *plVar10;
  char *pcVar11;
  uint32_t uVar12;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  undefined7 uStack_d7;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_78;
  char local_70 [8];
  int64_t local_68;
  uint64_t local_60;
  int local_58;
  int64_t *local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  char local_38 [8];
  
  FUN_007ec8d0();
  if ((local_70[0] == '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_50 = local_78;
  FUN_01e561b0();
  FUN_01d8b220();
  local_e0 = (int64_t *)CONCAT71(uStack_47,local_48);
  if (local_40 == '\0') {
    if (local_e0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_38[0] = '\0';
  local_a8 = local_e0;
  do {
    plVar8 = local_e0;
    (**(code **)(*local_e0 + 0x370))();
    if (local_78 == plVar8) {
      if (((local_38[0] == '\0') && (local_78 != (int64_t *)0x0)) && (local_70[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_007ecb37;
      }
    }
    else {
      local_e0 = local_78;
      plVar8 = local_78;
      if (local_70[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar2 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar2 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_007ecb37:
        local_38[0] = '\x01';
        pcVar2 = local_70;
      }
      *pcVar2 = '\0';
    }
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026f7020 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      g_0270aa58 = FUN_00015ff0();
      g_0270aa40 = "MDEditorViewController";
      g_0270aa48 = 0x1e8;
      g_0270aa50 = FUN_00074eb0;
      g_0270aa60 = 0;
      ram_000000000270aa68 = 0;
      g_0270aa70 = 0;
      g_0270aae8 = 0;
      ram_000000000270aaf0 = 0;
      g_0270aaf8 = 0;
      g_0270aafa = 1;
      g_0270aa78 = 0;
      ram_000000000270aa80 = 0;
      g_0270aa88 = 0;
      ram_000000000270aa90 = 0;
      g_0270aa98 = 0;
      ram_000000000270aaa0 = 0;
      g_0270aaa8 = 0;
      ram_000000000270aab0 = 0;
      g_0270aab8 = 0;
      ram_000000000270aac0 = 0;
      g_0270aac8 = 0;
      ram_000000000270aad0 = 0;
      g_0270aad8 = 0;
      ram_000000000270aae0 = 0;
      g_0270ab03 = 0;
      g_0270aafb = 0;
      ___cxa_guard_release();
    }
    pplVar6 = (int64_t **)&g_02802688;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar1 = FUN_00e85ea0();
      pplVar6 = &local_e0;
      if (cVar1 == '\0') {
        pplVar6 = (int64_t **)&g_02802688;
      }
    }
    if (*pplVar6 != (int64_t *)0x0) {
      if ((local_38[0] == '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      plVar8 = local_50;
      plVar10 = local_e0;
      if (local_a8 == (int64_t *)0x0) goto LAB_007eccd3;
      goto LAB_007eccce;
    }
    if (local_e0 == (int64_t *)0x0) {
      plVar8 = local_50;
      plVar10 = (int64_t *)0x0;
      if (local_a8 != (int64_t *)0x0) {
LAB_007eccce:
        plVar8 = local_50;
        FUN_00d50b20();
      }
LAB_007eccd3:
      if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (CONCAT71(uStack_d7,local_d8) != 0)) {
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0xd0) != 0) {
        local_70[0] = '\0';
        local_78 = (int64_t *)0x0;
        local_60 = 0xffffffff;
        local_58 = 0;
        local_68 = *(int64_t *)(this_ptr + 0xd0);
        while( true ) {
          lVar3 = (int64_t)(int)local_60;
          iVar7 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar7);
          if (*(int *)(local_68 + 0xc) <= iVar7) break;
          local_78 = *(int64_t **)(*(int64_t *)(local_68 + 0x10) + 8 + lVar3 * 8);
          if (plVar10 == (int64_t *)0x0) {
            (**(code **)(*local_78 + 0x670))();
          }
          else {
            FUN_0021a630();
            local_98 = 0;
            local_a0 = CONCAT71(uStack_47,local_48);
            if (local_40 == '\0') {
              if (local_a0 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            plVar8 = local_50;
            local_98 = '\x01';
            (**(code **)(*local_78 + 0x670))();
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
              FUN_00d50b20();
            }
          }
          (**(code **)(*local_78 + 0x620))();
          (**(code **)(*local_78 + 0x678))();
          if (local_60._4_4_ != 0) {
            if (local_60 < 0) {
              iVar7 = -local_60._4_4_;
            }
            else {
              local_60 = CONCAT44(local_60._4_4_,(int)local_60 - local_60._4_4_);
              FUN_00d23690();
              local_58 = local_58 + local_60._4_4_;
              iVar7 = 0;
            }
            local_60 = CONCAT44(iVar7,(int)local_60);
          }
        }
        FUN_003357b0();
      }
      if (*(int64_t *)(this_ptr + 0xf0) != 0) {
        *(void*)(this_ptr + 0xf0) = 0;
        FUN_00d50b20();
      }
      if ((plVar8 != (int64_t *)0x0) && (*(int *)((int64_t)local_50 + 0xc) != 0)) {
        FUN_00d23310();
        pcVar2 = &local_48;
        if (local_70[0] != '\0') {
          pcVar2 = local_70;
        }
        local_48 = local_70[0];
        *pcVar2 = '\0';
        if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific((void*)pcVar2);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar3 = FUN_00e8b990();
        if ((local_48 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          local_c0 = 0;
          FUN_00d50b00();
          local_110 = g_0272f6d0;
          local_c0 = '\x01';
          local_c8 = this_ptr;
          if (g_0272f6d0 != 0) {
            FUN_00d50b00();
          }
          local_108 = '\x01';
          FUN_00d23310();
          pcVar2 = &local_d8;
          pcVar11 = local_70;
          if (local_70[0] == '\0') {
            pcVar11 = pcVar2;
          }
          local_d8 = local_70[0];
          *pcVar11 = '\0';
          if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific((void*)pcVar2);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_b8 = FUN_00e8b990();
          local_b0 = 0;
          if (local_b8 != 0) {
            FUN_00d50b00();
          }
          local_b0 = '\x01';
          FUN_007eece0();
          uVar12 = FUN_00e86210();
          local_100 = g_0272f6d8;
          if (g_0272f6d8 != 0) {
            uVar12 = FUN_00d50b00();
          }
          local_f8 = '\x01';
          FUN_00c841b0(uVar12,&local_100);
          local_88 = 0;
          if (local_70[0] == '\0') {
            if (local_78 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70[0] = '\0';
          }
          local_88 = '\x01';
          local_90 = local_78;
          local_e8 = '\0';
          local_f0 = 0;
          FUN_000bfbc0(&local_b8,&local_110,0xa0,&local_90);
          lVar3 = *(int64_t *)(this_ptr + 0xf0);
          lVar5 = CONCAT71(uStack_47,local_48);
          lVar9 = lVar3;
          if (lVar3 != lVar5) {
            if (local_40 == '\0') {
              if (lVar5 == 0) {
                lVar5 = 0;
              }
              else {
                FUN_00d50b00();
                lVar5 = CONCAT71(uStack_47,local_48);
                lVar3 = *(int64_t *)(this_ptr + 0xf0);
              }
            }
            else {
              local_40 = '\0';
            }
            *(int64_t *)(this_ptr + 0xf0) = lVar5;
            lVar9 = lVar5;
            if (lVar3 != 0) {
              FUN_00d50b20();
              lVar9 = CONCAT71(uStack_47,local_48);
            }
          }
          if ((local_40 != '\0') && (lVar9 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_108 != '\0') && (local_110 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      *(void*)(this_ptr + 0xf8) = 1;
      FUN_007ebe20();
      if (plVar10 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}

