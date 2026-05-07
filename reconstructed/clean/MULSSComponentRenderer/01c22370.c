// Function: FUN_01c22370
// Address: 01c22370
// Size: 2198 bytes
// Class: MULSSComponentRenderer
// === MULSSComponentRenderer properties ===
//                   _currentComponent
//                   _components
//                   _lastRightAdjacentItem
//                   _sourceSamplePosition


void FUN_01c22370(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  void*puVar6;
  int64_t lVar7;
  void*puVar8;
  char *pcVar9;
  int iVar10;
  void**ppuVar11;
  int64_t *arg1;
  int64_t this_ptr;
  void*puVar12;
  void*puVar13;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  void*local_78;
  void*local_70;
  char local_68 [8];
  void*local_60;
  uint64_t local_58;
  int local_50;
  void*local_48;
  char local_40 [8];
  
  FUN_01c219e0();
  puVar6 = local_70;
  if (local_70 == (void*)*arg1) {
    cVar5 = '\x01';
  }
  else {
    FUN_01c219e0();
    if (local_48 == (void*)0x0) {
      cVar5 = '\0';
    }
    else {
      if (*arg1 == 0) {
        cVar5 = '\0';
      }
      else {
        FUN_01c219e0();
        cVar5 = (**(code **)(*(int64_t *)CONCAT71(uStack_87,local_88) + 0x50))();
        if (local_80 != '\0') {
          FUN_00d50b20();
        }
      }
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  if ((local_68[0] != '\0') && (puVar6 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_02572358;
    pcVar4 = g_02572370;
    local_78 = puVar6;
    (*g_02572370)();
    lVar1 = *(int64_t *)(this_ptr + 0x1d0);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if ((param_2 != '\0') && (*(int64_t *)(this_ptr + 0x1d0) != 0)) {
      *(void*)(this_ptr + 0x1d0) = 0;
      FUN_00d50b20();
    }
    puVar6 = (void*)*arg1;
    if (*(int64_t *)(this_ptr + 0x168) == 0) {
      if (puVar6 != (void*)0x0) {
        local_68[0] = '\0';
        local_70 = (void*)0x0;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        local_60 = puVar6;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar10 = -local_58._4_4_;
            }
            else {
              iVar10 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar10);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar10 = 0;
            }
            local_58 = CONCAT44(iVar10,(int)local_58);
          }
          lVar7 = (int64_t)(int)local_58;
          iVar10 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar10);
          if (*(int *)((int64_t)local_60 + 0xc) <= iVar10) break;
          local_70 = *(void**)(local_60[2] + 8 + lVar7 * 8);
          FUN_01c231c0();
          puVar6 = (void*)CONCAT71(uStack_87,local_88);
          if (local_80 == '\0') {
            if (puVar6 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          local_40[0] = '\0';
          local_48 = puVar6;
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar6 != (void*)0x0) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_0038d420();
      }
    }
    else if (puVar6 != (void*)0x0) {
      local_68[0] = '\0';
      local_70 = (void*)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = puVar6;
      while( true ) {
        lVar7 = (int64_t)(int)local_58;
        iVar10 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar10);
        if (*(int *)((int64_t)local_60 + 0xc) <= iVar10) break;
        puVar6 = *(void**)(local_60[2] + 8 + lVar7 * 8);
        local_70 = puVar6;
        if (local_68[0] == '\0') {
          if (puVar6 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68[0] = '\0';
        }
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &g_02572358;
        (*pcVar4)();
        do {
          local_40[0] = '\0';
          local_48 = puVar6;
          FUN_00d23370();
          if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(**(int64_t **)(this_ptr + 0x168) + 0x370))();
          puVar12 = local_48;
          if (local_48 == puVar6) {
LAB_01c2263d:
            puVar12 = puVar6;
            if (local_40[0] != '\0') {
LAB_01c22643:
              if (local_48 != (void*)0x0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            if (local_40[0] == '\0') {
              if (local_48 != (void*)0x0) {
                FUN_00d50b00();
              }
              if (puVar6 != (void*)0x0) {
                FUN_00d50b20();
                puVar6 = puVar12;
                goto LAB_01c2263d;
              }
              if (local_40[0] == '\0') goto LAB_01c22651;
              goto LAB_01c22643;
            }
            if (puVar6 != (void*)0x0) {
              FUN_00d50b20();
            }
            local_40[0] = '\0';
          }
LAB_01c22651:
          puVar6 = puVar12;
        } while (puVar12 != (void*)0x0);
        if (*(int *)((int64_t)puVar8 + 0xc) != 0) {
          local_40[0] = '\0';
          local_48 = puVar8;
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        if (local_58._4_4_ != 0) {
          if (local_58 < 0) {
            iVar10 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar10 = 0;
          }
          local_58 = CONCAT44(iVar10,(int)local_58);
        }
      }
      FUN_0038d420();
    }
    if (*(int *)(this_ptr + 0x160) == 1) {
      if ((*(int64_t *)(this_ptr + 0x188) != 0) && (*(int *)((int64_t)local_78 + 0xc) != 0)) {
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &g_02572358;
        (*pcVar4)();
        local_68[0] = '\0';
        local_70 = (void*)0x0;
        local_60 = local_78;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        bVar2 = false;
        puVar6 = (void*)0x0;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar10 = -local_58._4_4_;
            }
            else {
              iVar10 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar10);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar10 = 0;
            }
            local_58 = CONCAT44(iVar10,(int)local_58);
          }
          lVar7 = (int64_t)(int)local_58;
          iVar10 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar10);
          if (*(int *)((int64_t)local_60 + 0xc) <= iVar10) break;
          local_70 = *(void**)(local_60[2] + 8 + lVar7 * 8);
          FUN_00d23340();
          puVar12 = local_48;
          local_88 = local_40[0];
          pcVar9 = local_40;
          if (local_40[0] == '\0') {
            pcVar9 = &local_88;
          }
          *pcVar9 = '\0';
          if ((local_40[0] != '\0') && (puVar12 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_88 == '\0') && (puVar12 != (void*)0x0)) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (puVar12 != (void*)0x0) {
            FUN_00d50b20();
          }
          puVar12 = local_70;
          puVar13 = puVar6;
          if (local_50 + (int)local_58 == 0) {
            if (local_70 == puVar6) {
              bVar3 = bVar2;
              if ((!bVar2) && (local_70 != (void*)0x0)) {
                puVar12 = puVar6;
                if (local_68[0] != '\0') goto LAB_01c22af6;
                FUN_00d50b00();
                bVar3 = true;
              }
            }
            else if (local_68[0] == '\0') {
              if (local_70 != (void*)0x0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              puVar13 = puVar12;
              if ((bVar2) && (puVar6 != (void*)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((bVar2) && (puVar6 != (void*)0x0)) {
                FUN_00d50b20();
              }
LAB_01c22af6:
              local_68[0] = '\0';
              puVar13 = puVar12;
              bVar3 = true;
            }
            FUN_00d23740();
            bVar2 = bVar3;
          }
          puVar6 = puVar13;
        }
        FUN_01c2d530();
        FUN_01ce8890();
        if (puVar8 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((bVar2) && (puVar6 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else if ((*(int *)(this_ptr + 0x160) == 0) && (*(int64_t *)(this_ptr + 0x180) != 0)) {
      if (*(int *)((int64_t)local_78 + 0xc) == 0) {
        FUN_01dd4c60();
      }
      else {
        FUN_00d23310();
        puVar6 = local_70;
        ppuVar11 = &local_48;
        if (local_68[0] != '\0') {
          ppuVar11 = (void**)local_68;
        }
        local_48 = (void*)CONCAT71(local_48._1_7_,local_68[0]);
        *(char *)ppuVar11 = '\0';
        if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 == '\0') && (puVar6 != (void*)0x0)) {
          FUN_00d50b00();
        }
        FUN_01eda650();
        if (puVar6 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if ((param_2 != '\0') && (lVar7 = *(int64_t *)(this_ptr + 0x1d0), lVar7 != lVar1)) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x1d0) = lVar1;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

