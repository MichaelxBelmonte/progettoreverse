// ===================================================================
// GNOperationProgressObserver — Complete reconstructed pseudocode
// 15 functions
// ===================================================================


// ============================================================
// 007f0cf0
// ============================================================
// Function: FUN_007f0cf0
// Address: 007f0cf0
// Size: 1080 bytes
// Class: GNOperationProgressObserver

void FUN_007f0cf0(uint64_t param_1,void*param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint8_t uVar3;
  char cVar4;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar5;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar5 = FUN_01f27fe0();
  local_b0 = *arg1;
  local_a8 = '\0';
  FUN_002a0320(uVar5,&local_b0);
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    plVar1 = local_40;
    FUN_014ffc90();
    local_60 = local_50;
    local_58 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_58 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      local_90 = *arg1;
      local_88 = '\0';
      FUN_01500300();
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        uVar5 = FUN_01f27fe0();
        local_80 = plVar1;
        local_78 = '\0';
        FUN_002a0320(uVar5,&local_80);
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          local_70 = plVar1;
          local_68 = '\0';
          uVar3 = FUN_00742b20();
          FUN_01500530(0,uVar3);
          plVar1 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
               (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            if (param_2 != (void*)0x0) {
              uVar5 = FUN_00b7a6e0();
              *param_2 = uVar5;
            }
            *this_ptr = plVar1;
            *(void*)(this_ptr + 1) = 1;
            FUN_00d50b20();
            FUN_00d50b20();
            return;
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_a0 = *arg1;
    local_98 = '\0';
    uVar3 = FUN_00742b20();
    FUN_01500530(0,uVar3);
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      if (param_2 != (void*)0x0) {
        uVar5 = FUN_00b7a6e0();
        *param_2 = uVar5;
      }
      *this_ptr = plVar1;
      *(void*)(this_ptr + 1) = 1;
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 007f1730
// ============================================================
// Function: FUN_007f1730
// Address: 007f1730
// Size: 1311 bytes
// Class: GNOperationProgressObserver

void FUN_007f1730(int64_t param_1,int64_t *param_2)

{
  void*puVar1;
  void *pvVar2;
  uint64_t uVar3;
  void* pVar4;
  int64_t lVar5;
  void*arg1;
  void*this_ptr;
  int64_t *plVar6;
  bool bVar7;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  uint64_t local_38;
  
  lVar5 = param_1;
  puVar1 = (void*)FUN_00e8fc40();
  pVar4 = (void*)lVar5;
  FUN_00d4ff40();
  *puVar1 = &g_02510d80;
  puVar1[2] = &g_02511108;
  puVar1[3] = 0;
  FUN_00d500e0();
  if (*param_2 != 0) {
    uVar3 = *arg1;
    local_b0 = '\0';
    local_b8 = *param_2;
    FUN_007f28a0(uVar3,&local_b8);
    pVar4 = (void*)uVar3;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00363970();
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_007f184c;
    }
  }
  else if (local_48 != (int64_t *)0x0) {
LAB_007f184c:
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    if (local_48 == (int64_t *)0x0) {
      bVar7 = false;
    }
    else {
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      bVar7 = local_78 != 0;
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar7) {
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      local_68 = local_78;
      local_60 = 0;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_60 = '\x01';
      uVar3 = FUN_016cbba0();
      plVar6 = local_48;
      if (local_48 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
        local_38 = 0;
      }
      else if (local_40 == '\0') {
        uVar3 = FUN_00d50b00();
        local_38 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
        local_38 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = 0;
      plVar6 = (int64_t *)0x0;
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    FUN_00d50b20();
    goto LAB_007f1b72;
  }
  plVar6 = (int64_t *)0x0;
  local_38 = 0;
LAB_007f1b72:
  if (*param_2 != 0) {
    local_90 = '\0';
    local_98 = 0;
    local_88 = 0;
    local_80 = '\0';
    FUN_007f28a0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar6 != (int64_t *)0x0) && (param_1 != 0)) {
    FUN_01f27fe0();
    (**(code **)(*local_48 + 0x560))();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if (((char)local_38 == '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}



// ============================================================
// 007efd50
// ============================================================
// Function: FUN_007efd50
// Address: 007efd50
// Size: 896 bytes
// Class: GNOperationProgressObserver

uint64_t FUN_007efd50(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  char *pcVar2;
  int64_t this_ptr;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t local_70;
  char local_68;
  uint64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar5 = FUN_01d384d0();
  local_70 = g_026fcec0;
  if (g_026fcec0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_68 = '\x01';
  FUN_01cac990(uVar5,&local_70);
  lVar4 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  *(void*)(this_ptr + 0x30) = 0;
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    if (0 < *(int *)(lVar4 + 0xc)) {
      FUN_00d23310();
      lVar4 = local_48;
      local_38[0] = local_40[0];
      pcVar2 = local_40;
      if (local_40[0] == '\0') {
        pcVar2 = local_38;
      }
      *pcVar2 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] == '\0') && (lVar4 != 0)) {
        FUN_00d50b00();
      }
      FUN_007f0230(this_ptr + 0x30,&local_60);
      lVar1 = local_58;
      lVar3 = *(int64_t *)(this_ptr + 0x18);
      if (lVar3 == local_58) {
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((local_50 == '\0') && (local_58 != 0)) {
          FUN_00d50b00();
          lVar3 = *(int64_t *)(this_ptr + 0x18);
        }
        *(int64_t *)(this_ptr + 0x18) = lVar1;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0x18) == 0) {
        uVar5 = FUN_00d23310();
        lVar4 = local_48;
        local_38[0] = local_40[0];
        pcVar2 = local_40;
        if (local_40[0] == '\0') {
          pcVar2 = local_38;
        }
        *pcVar2 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          uVar5 = FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (lVar4 != 0)) {
          uVar5 = FUN_00d50b00();
        }
        FUN_007f0a70(uVar5,&local_60);
        lVar1 = local_58;
        lVar3 = *(int64_t *)(this_ptr + 0x20);
        if (lVar3 == local_58) {
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((local_50 == '\0') && (local_58 != 0)) {
            FUN_00d50b00();
            lVar3 = *(int64_t *)(this_ptr + 0x20);
          }
          *(int64_t *)(this_ptr + 0x20) = lVar1;
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if ((*(int64_t *)(this_ptr + 0x18) == 0) && (*(int64_t *)(this_ptr + 0x20) == 0)) {
          uVar5 = FUN_00d23310();
          pcVar2 = local_40;
          if (local_40[0] == '\0') {
            pcVar2 = local_38;
          }
          local_38[0] = local_40[0];
          *pcVar2 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            uVar5 = FUN_00d50b20();
          }
          if ((local_38[0] == '\0') && (local_48 != 0)) {
            uVar5 = FUN_00d50b00();
          }
          FUN_007f0cf0(uVar5,&local_60,param_3,param_4,local_48,1);
          lVar4 = *(int64_t *)(this_ptr + 0x28);
          if (lVar4 == local_58) {
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((local_50 == '\0') && (local_58 != 0)) {
              FUN_00d50b00();
              lVar4 = *(int64_t *)(this_ptr + 0x28);
            }
            *(int64_t *)(this_ptr + 0x28) = local_58;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          if (local_48 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    uVar5 = local_60;
    FUN_00d50b20();
  }
  return uVar5;
}



// ============================================================
// 007f0230
// ============================================================
// Function: FUN_007f0230
// Address: 007f0230
// Size: 1271 bytes
// Class: GNOperationProgressObserver

void FUN_007f0230(uint64_t *param_1,double *param_2)

{
  char cVar1;
  void *pvVar2;
  void* pVar3;
  int64_t *plVar4;
  void*arg1;
  void*this_ptr;
  bool bVar5;
  double dVar6;
  uint64_t uVar7;
  int64_t local_68;
  char local_60;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*(int64_t *)*arg1 + 0x370))();
  FUN_00b5dfe0();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  cVar1 = (**(code **)(*local_40 + 0x50))();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_00b5f170();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (local_40 != (int64_t *)0x0) {
      if (param_2 != (double *)0x0) {
        dVar6 = (double)FUN_00b5ec40();
        *param_2 = dVar6;
        if (dVar6 <= 0.0) {
          *param_2 = 3600.0;
        }
      }
      if (param_1 != (uint64_t *)0x0) {
        uVar7 = FUN_00b609e0();
        *param_1 = uVar7 ^ g_023945b0;
      }
      pVar3 = 0;
      FUN_0153a4c0(0,0);
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if (local_40 == (int64_t *)0x0) {
        bVar5 = false;
        plVar4 = (int64_t *)0x0;
      }
      else {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313b00();
        if (local_40 == (int64_t *)0x0) {
          bVar5 = false;
        }
        else {
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01313b00();
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01505900();
          bVar5 = local_50 != 0;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar5) {
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01313b00();
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01505900();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_016cbba0();
          if (local_40 == (int64_t *)0x0) {
            bVar5 = false;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar5 = true;
          }
          else {
            bVar5 = true;
          }
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          plVar4 = local_40;
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar5 = false;
          plVar4 = (int64_t *)0x0;
        }
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50130();
      }
      FUN_00d50130();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      *(void*)(this_ptr + 1) = 0;
      if (!bVar5) {
        if (plVar4 == (int64_t *)0x0) {
          plVar4 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
        }
      }
      goto LAB_007f0711;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  plVar4 = (int64_t *)0x0;
LAB_007f0711:
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 007f28a0
// ============================================================
// Function: FUN_007f28a0
// Address: 007f28a0
// Size: 1012 bytes
// Class: GNOperationProgressObserver

void FUN_007f28a0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  void*local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  void*local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x18) != 0) {
    FUN_00172bc0();
    local_d8 = '\0';
    local_e0 = (int64_t *)0x0;
    FUN_017a9390();
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      (**(code **)(*local_e0 + 0x10))();
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x18);
  lVar3 = lVar2;
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x18) = lVar1;
    lVar3 = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = *(int64_t *)(this_ptr + 0x18);
    }
  }
  if ((lVar3 != 0) && (*param_2 != 0)) {
    FUN_017a6db0();
    if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (local_70 != (void*)0x0) {
      FUN_017a6db0();
      (**(code **)(*local_f0 + 0x468))();
      lVar1 = g_02729550;
      if (g_02729550 != 0) {
        FUN_00d50b00();
      }
      local_108 = lVar1;
      FUN_00083ea0(2,&local_108);
      FUN_000b4da0();
      lVar2 = local_90;
      if (local_88 == '\0') {
        if (((local_90 != 0) && (FUN_00d50b00(), local_88 != '\0')) && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_88 = '\0';
      }
      local_70 = (void*)&g_0253d630;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_70 = &g_024c5048;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = g_026f6f70;
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_0272f678;
      local_d0 = lVar1;
      local_c8 = '\x01';
      if (g_0272f678 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar3;
      local_b8 = '\x01';
      local_b0 = lVar2;
      local_a8 = '\0';
      FUN_00d31230(&local_b0,&local_c0);
      local_40 = local_70;
      local_38 = 0;
      if (local_68 == '\0') {
        if (local_70 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_38 = '\x01';
      local_a0 = *param_2;
      local_98 = '\0';
      FUN_00172950();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      local_78 = 0;
      (**(code **)(*(int64_t *)(this_ptr + 0x10) + 0x10))();
      FUN_00d50b00();
      local_78 = '\x01';
      local_80 = (int64_t *)(this_ptr + 0x10);
      FUN_017a9390();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        (**(code **)(*local_80 + 0x10))();
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 007f2390
// ============================================================
// Function: FUN_007f2390
// Address: 007f2390
// Size: 724 bytes
// Class: GNOperationProgressObserver

void FUN_007f2390(void)

{
  int64_t lVar1;
  void*puVar2;
  char *pcVar3;
  int64_t *this_ptr;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  void*local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  FUN_00b5dfe0();
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
  FUN_01f27fe0();
  (**(code **)(*local_90 + 0x520))();
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
  FUN_00d23480();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  local_80 = 0;
  local_78 = '\0';
  local_68 = '\0';
  local_60 = 0;
  local_58 = '\0';
  local_70 = puVar2;
  FUN_01f2a980(&local_70,&local_80,0,0);
  lVar1 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if (*(int *)(lVar1 + 0xc) < 1) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      FUN_00d23310();
      pcVar3 = local_38;
      if (local_38[0] == '\0') {
        pcVar3 = &local_50;
      }
      local_50 = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      if ((local_50 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 013dd3f0
// ============================================================
// Function: FUN_013dd3f0
// Address: 013dd3f0
// Size: 547 bytes
// Class: GNOperationProgressObserver

double FUN_013dd3f0(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t lVar3;
  void* pVar4;
  char *pcVar5;
  int64_t this_ptr;
  int64_t *plVar6;
  double dVar7;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((*(int64_t *)(this_ptr + 0x48) != 0) && (*(int64_t *)(this_ptr + 0x40) != 0)) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar2 = FUN_014bb8a0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013df6b0();
    pVar4 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
    pcVar5 = local_38;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      pvVar1 = _pthread_getspecific(pVar4);
      plVar6 = local_48;
      if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        plVar6 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      lVar3 = (**(code **)(*plVar6 + 0x378))();
      if (lVar3 < lVar2) {
        pvVar1 = _pthread_getspecific(pVar4);
        if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
          local_48 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
        lVar2 = (**(code **)(*local_48 + 0x378))();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar3 = FUN_013de650();
    if (*(int64_t *)(this_ptr + 0x40) == 0) {
      dVar7 = 0.0;
    }
    else {
      pvVar1 = _pthread_getspecific(pVar4);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar7 = (double)FUN_013de950();
    }
    return dVar7 * (double)(lVar2 - lVar3);
  }
  dVar7 = (double)FUN_013dd200();
  return dVar7;
}



// ============================================================
// 007f1f80
// ============================================================
// Function: FUN_007f1f80
// Address: 007f1f80
// Size: 502 bytes
// Class: GNOperationProgressObserver

void FUN_007f1f80(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_68 = '\0';
  local_70 = 0;
  FUN_01502670(param_2,&local_70);
  lVar4 = local_40;
  pVar5 = (void*)param_2;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 == 0) {
    *(void*)(this_ptr + 1) = 0;
    lVar4 = 0;
  }
  else {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
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
    FUN_016cbba0();
    lVar2 = local_40;
    if (local_40 == 0) {
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != 0)) {
        bVar1 = true;
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    FUN_00d50b20();
    *(void*)(this_ptr + 1) = 0;
    lVar4 = 0;
    if (bVar1) {
      lVar4 = lVar2;
    }
    if (lVar2 != 0 && !bVar1) {
      FUN_00d50b00();
      lVar4 = lVar2;
    }
  }
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00e34da0
// ============================================================
// Function: FUN_00e34da0
// Address: 00e34da0
// Size: 523 bytes
// Class: GNOperationProgressObserver
// String references:
//   " [low cpu]"
//   " [heavy cpu]"
//   " progress:"
//   "%g"
//   " COMPLEX!"
//   " PREPARING"
//   " RUNNING"
//   " FINISHED"
//   " (with JobCenter %p)"
//   " (SHOULD cancel)"
//   ", is CANCELLED"

void FUN_00e34da0(void)

{
  int iVar1;
  char cVar2;
  void*puVar3;
  int64_t *arg1;
  void*this_ptr;
  void*local_50;
  uint local_48;
  float local_44;
  int64_t local_40;
  void*local_38;
  char local_30;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025795a8;
  (*g_025795c0)();
  FUN_00d4fff0();
  local_38 = local_50;
  local_30 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_30 = '\x01';
  FUN_00d8dbf0();
  if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((char)arg1[0xb] == '\0') {
    FUN_00d8db40();
  }
  else {
    FUN_00d8db40();
  }
  FUN_00d8db40();
  local_44 = *(float *)(arg1 + 10) * g_023908e0;
  local_48 = 1;
  local_50 = &g_024d0b28;
  FUN_00d94d80(local_44,&local_50);
  FUN_00d8db40();
  cVar2 = (**(code **)(*arg1 + 0x378))();
  if (cVar2 != '\0') {
    FUN_00d8db40();
  }
  iVar1 = (int)arg1[7];
  if (iVar1 == 1) {
    FUN_00d8db40();
  }
  else if (iVar1 == 0) {
    FUN_00d8db40();
  }
  else if (iVar1 == -1) {
    FUN_00d8db40();
  }
  if (arg1[4] != 0) {
    local_48 = 1;
    local_50 = (void*)&g_02576920;
    local_40 = arg1[4];
    FUN_00d94d80(&g_02576920,&local_50);
  }
  if (*(char *)((int64_t)arg1 + 0x3c) != '\0') {
    FUN_00d8db40();
  }
  if (*(char *)((int64_t)arg1 + 0x3d) != '\0') {
    FUN_00d8db40();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00044470
// ============================================================
// Function: FUN_00044470
// Address: 00044470
// Size: 2086 bytes
// Class: GNOperationProgressObserver
// String references:
//   "GNOperationProgressObserver"
//   "GNOperationCancelDelegate"
//   "GNJob"

void FUN_00044470(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_024c1578;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[3] = &g_024c15b0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02589ed0;
  this_ptr[2] = &g_0258a288;
  this_ptr[3] = &g_0258a2c0;
  FUN_00044d20();
  FUN_00045040();
  FUN_000453c0();
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d1f9b == '\0') {
    FUN_00045740();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d1f9b == '\0') {
    FUN_000459e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3d) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d1f9b == '\0') {
    FUN_00045b70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3e) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d1f9b == '\0') {
    FUN_00045d00();
    FUN_00e87980();
  }
  FUN_00045e90();
  FUN_00046150();
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d1f9b == '\0') {
    FUN_00046410();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d1f9b == '\0') {
    FUN_000465a0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d1f9b == '\0') {
    FUN_00046730();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 007ef7c0
// ============================================================
// Function: FUN_007ef7c0
// Address: 007ef7c0
// Size: 559 bytes
// Class: GNOperationProgressObserver
// String references:
//   "GNOperationProgressObserver"
//   "MDTempoEditorHelper2"

void FUN_007ef7c0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_28;
  
  if ((g_0272f968 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_0272f8b8 = FUN_00d4fe50();
    g_0272f8a0 = "MDTempoEditorHelper2";
    g_0272f8a8 = 0x20;
    g_0272f8b0 = FUN_007f3780;
    g_0272f8c0 = 0;
    ram_000000000272f8c8 = 0;
    g_0272f8d0 = 0;
    g_0272f948 = 0;
    ram_000000000272f950 = 0;
    g_0272f958 = 0;
    g_0272f95a = 1;
    g_0272f8d8 = 0;
    ram_000000000272f8e0 = 0;
    g_0272f8e8 = 0;
    ram_000000000272f8f0 = 0;
    g_0272f8f8 = 0;
    ram_000000000272f900 = 0;
    g_0272f908 = 0;
    ram_000000000272f910 = 0;
    g_0272f918 = 0;
    ram_000000000272f920 = 0;
    g_0272f928 = 0;
    ram_000000000272f930 = 0;
    g_0272f938 = 0;
    ram_000000000272f940 = 0;
    g_0272f963 = 0;
    g_0272f95b = 0;
    ___cxa_guard_release();
  }
  if (g_0272f95b == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00d4ff80();
    if ((g_0278c930 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      g_026ceef0 = "GNOperationProgressObserver";
      g_026cef00 = 0;
      g_026ceef8 = 0;
      ___cxa_guard_release();
    }
    FUN_00e87c40();
    FUN_007f3a00();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}



// ============================================================
// 002b1d10
// ============================================================
// Function: FUN_002b1d10
// Address: 002b1d10
// Size: 740 bytes
// Class: GNOperationProgressObserver
// String references:
//   "GNOperationProgressObserver"
//   "MDDocumentLoader"

void FUN_002b1d10(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_024c15b0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0250fb60;
  this_ptr[2] = &g_0250fee8;
  FUN_002b2090();
  FUN_002b23c0();
  FUN_002b26f0();
  FUN_002b2a20();
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fc2f3 == '\0') {
    FUN_002b2ce0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fc2f3 == '\0') {
    FUN_002b2e70();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 00e35460
// ============================================================
// Function: FUN_00e35460
// Address: 00e35460
// Size: 688 bytes
// Class: GNOperationProgressObserver
// String references:
//   "GNOperationProgressObserver"
//   "GNOperationProgressScalingAdapter"

void FUN_00e35460(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_024c15b0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_025831e0;
  this_ptr[2] = &g_02583570;
  FUN_00e35760();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027863e3 == '\0') {
    FUN_00e35b00();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027863e3 == '\0') {
    FUN_00e35c90();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 013dbcd0
// ============================================================
// Function: FUN_013dbcd0
// Address: 013dbcd0
// Size: 590 bytes
// Class: GNOperationProgressObserver
// String references:
//   "GNOperationProgressObserver"
//   "MUSeparationProgressNotificationAdapter"

void FUN_013dbcd0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_024c15b0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_025d8bd0;
  this_ptr[2] = &g_025d8f58;
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bf613 == '\0') {
    FUN_013dbf50();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_027bf613 == '\0') {
    FUN_013dc0c0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 00045510
// ============================================================
// Function: FUN_00045510
// Address: 00045510
// Size: 512 bytes
// Class: GNOperationProgressObserver
// String references:
//   "_progressObserver"
//   "GNOperationProgressObserver"
//   "GNJob"

void* FUN_00045510(void)

{
  int iVar1;
  int iVar2;
  
  // [STATIC_INIT: property registration]
      g_026d2048 = (iVar1 != 0) << 6 | 0x82;
      g_026d2030 = "_progressObserver";
      g_026d2038 = &g_026d1ee0;
      g_026d2040 = 0;
      g_026d2050 = 0;
      ram_00000000026d2058 = 0;
      g_026d2060 = 0;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &g_026d2030;
}

