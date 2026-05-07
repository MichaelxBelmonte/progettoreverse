// Function: FUN_01b791a0
// Address: 01b791a0
// Size: 3940 bytes
// Class: GNValue

void FUN_01b791a0(void* param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  uint64_t uVar4;
  void* pVar5;
  int64_t lVar6;
  void*puVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t *plVar10;
  uint64_t *puVar11;
  char *pcVar12;
  uint32_t uVar13;
  int64_t *this_ptr;
  int64_t unaff_R12;
  bool bVar14;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  uint64_t local_a8;
  char local_a0;
  uint32_t local_98;
  int iStack_94;
  char local_90;
  int64_t local_88;
  int64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  char local_68 [16];
  uint64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38 [8];
  
  if ((int64_t *)this_ptr[0x29] == (int64_t *)0x0) {
    return;
  }
  (**(code **)(*(int64_t *)this_ptr[0x29] + 0x970))();
  if (local_40 == 0) {
    cVar1 = '\x01';
  }
  else {
    (**(code **)(*(int64_t *)this_ptr[0x29] + 0x970))();
    iVar2 = FUN_00d8c7a0();
    if (iVar2 == 0) {
      cVar1 = '\x01';
    }
    else {
      (**(code **)(*(int64_t *)this_ptr[0x29] + 0x970))();
      FUN_00d95590();
      lVar6 = CONCAT44(iStack_94,local_98);
      if (local_90 == '\0') {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      cVar1 = FUN_00d90dc0();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (CONCAT44(iStack_94,local_98) != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    (**(code **)(*(int64_t *)this_ptr[0x29] + 0x970))();
    local_c0 = local_58;
    local_b8 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_b8 = '\x01';
    lVar6 = this_ptr[0x2a];
    (**(code **)(*this_ptr + 0x948))(lVar6,&local_c0);
    param_1 = (void*)lVar6;
    if (local_38[0] == '\0') {
      if (local_40 == 0) {
        local_80 = 0;
      }
      else {
        local_80 = local_40;
        FUN_00d50b00();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_80 = local_40;
      local_38[0] = '\0';
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_80 == 0) {
      local_70 = (**(code **)(*this_ptr + 0x9d8))();
      local_78 = (**(code **)(*this_ptr + 0x9e0))();
      local_80 = 0;
      goto LAB_01b7a003;
    }
  }
  else {
    local_80 = 0;
  }
  (**(code **)(*this_ptr + 0xa48))();
  uVar4 = this_ptr[0x2a];
  if (uVar4 >> 0x20 == 0) {
    unaff_R12 = this_ptr[0x2b];
    if (unaff_R12 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar7 = &local_70;
    FUN_01252670(puVar7,0,&local_78,0);
    uVar8 = CONCAT71((int7)((uint64_t)puVar7 >> 8),local_38[0]);
    pcVar12 = local_68 + 8;
    if (local_38[0] != '\0') {
      pcVar12 = local_38;
    }
    local_68[8] = local_38[0];
    *pcVar12 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    param_1 = (void*)uVar8;
    if (local_40 == 0) goto LAB_01b79527;
    bVar14 = true;
    lVar6 = local_40;
    local_b0 = unaff_R12;
    if (local_68[8] != '\0') {
      FUN_00d50b20();
    }
LAB_01b796ad:
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
    pVar5 = (void*)uVar8;
    if (!bVar14) goto LAB_01b796c7;
LAB_01b79606:
    if ((*(char *)((int64_t)this_ptr + 0x1b4) == '\0') && (cVar1 == '\x01')) {
      if ((local_70 >> 0x20 != 0) ||
         (pVar5 = (void*)(local_78 >> 0x20), local_78 >> 0x20 != 0)) {
        local_50 = '\0';
        local_58 = 0;
        if (local_70 >> 0x20 == 0) {
          lVar6 = this_ptr[0x2b];
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar4 = local_78;
          FUN_012521f0(local_78,0,&local_a8,&local_98);
          pVar5 = (void*)CONCAT71((int7)(uVar4 >> 8),local_38[0]);
          pcVar12 = local_68;
          if (local_38[0] != '\0') {
            pcVar12 = local_38;
          }
          local_68[0] = local_38[0];
          *pcVar12 = '\0';
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          cVar1 = local_50;
          lVar9 = local_58;
          if (local_58 == local_40) {
            if ((local_50 == '\0') && (local_40 != 0)) {
              if (local_68[0] == '\0') {
                FUN_00d50b00();
              }
              goto LAB_01b79edf;
            }
            if ((local_68[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_68[0] == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
              local_58 = local_40;
              if ((cVar1 != '\0') && (lVar9 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58 = local_40;
              if ((local_50 != '\0') && (lVar9 != 0)) {
                FUN_00d50b20();
              }
            }
LAB_01b79edf:
            local_50 = '\x01';
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if (local_58 != 0) {
            lVar6 = this_ptr[0x2b];
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar9 = local_58;
            local_38[0] = '\0';
            FUN_012502a0(CONCAT44(iStack_94,local_98),local_70,(char)this_ptr[0x36]);
            if ((local_38[0] != '\0') && (lVar9 != 0)) {
              FUN_00d50b20();
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          lVar6 = this_ptr[0x2b];
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar4 = local_70;
          FUN_012521f0(local_70,0,&local_a8,&local_98);
          pVar5 = (void*)CONCAT71((int7)(uVar4 >> 8),local_38[0]);
          pcVar12 = local_68;
          if (local_38[0] != '\0') {
            pcVar12 = local_38;
          }
          local_68[0] = local_38[0];
          *pcVar12 = '\0';
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          cVar1 = local_50;
          lVar9 = local_58;
          if (local_58 == local_40) {
            if ((local_50 == '\0') && (local_40 != 0)) {
              if (local_68[0] == '\0') {
                FUN_00d50b00();
              }
              goto LAB_01b79dd7;
            }
            if ((local_68[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_68[0] == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
              local_58 = local_40;
              if ((cVar1 != '\0') && (lVar9 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58 = local_40;
              if ((local_50 != '\0') && (lVar9 != 0)) {
                FUN_00d50b20();
              }
            }
LAB_01b79dd7:
            local_50 = '\x01';
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if (local_58 != 0) {
            lVar6 = this_ptr[0x2b];
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            puVar11 = &local_a8;
            cVar1 = FUN_012535e0(puVar11,&local_58,&local_98,0);
            pVar5 = (void*)puVar11;
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
            if (cVar1 != '\0') {
              lVar6 = this_ptr[0x2b];
              if (lVar6 != 0) {
                FUN_00d50b00();
              }
              pvVar3 = _pthread_getspecific(pVar5);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              lVar9 = local_58;
              local_38[0] = '\0';
              FUN_012502a0(local_78,local_a8,(char)this_ptr[0x36]);
              if ((local_38[0] != '\0') && (lVar9 != 0)) {
                FUN_00d50b20();
              }
              if (lVar6 != 0) {
                FUN_00d50b20();
              }
            }
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if ((char)this_ptr[0x3b] != '\0') {
        local_70 = this_ptr[0x2a];
      }
      lVar6 = this_ptr[0x2b];
      plVar10 = this_ptr;
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific((void*)plVar10);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar9 = local_80;
      local_38[0] = '\0';
      FUN_012502a0(local_78,local_70,(char)this_ptr[0x36]);
      if ((local_38[0] != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0xa80))(local_78,local_70);
    }
  }
  else {
LAB_01b79527:
    lVar6 = this_ptr[0x2b];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar9 = this_ptr[0x2a];
    FUN_012521f0(lVar9,0,&local_70,&local_78);
    uVar8 = CONCAT71((int7)((uint64_t)lVar9 >> 8),local_38[0]);
    pcVar12 = (char *)&local_58;
    if (local_38[0] != '\0') {
      pcVar12 = local_38;
    }
    local_58 = CONCAT71(local_58._1_7_,local_38[0]);
    *pcVar12 = '\0';
    local_b0 = unaff_R12;
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    bVar14 = local_40 != 0;
    if (((char)local_58 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    pVar5 = (void*)uVar8;
    if (uVar4 >> 0x20 == 0) goto LAB_01b796ad;
    if (local_40 != 0) goto LAB_01b79606;
LAB_01b796c7:
    if (cVar1 == '\0') {
      local_a8 = FUN_00e7bcc0();
      uVar13 = (uint32_t)CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
      if (this_ptr[0x2c] == 0) {
LAB_01b7986f:
        local_40 = 0;
      }
      else {
        FUN_01a8c310();
        pVar5 = (void*)uVar8;
        if (local_40 == 0) goto LAB_01b7986f;
        if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar5 = 0;
        local_58 = FUN_016cac90(0,1);
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        if (((local_58._4_4_ != 0) && (*(int *)((int64_t)this_ptr + 0x154) != 0)) &&
           (cVar1 = FUN_00e7c000(), cVar1 != '\0')) {
          local_98 = 1;
          FUN_00e7c260();
        }
        uVar8 = 0;
        uVar4 = FUN_016cac90(0,2);
        FUN_00e7b970();
        local_a8 = uVar4;
        if ((uVar4 >> 0x20 != 0) && (cVar1 = FUN_00e7c650(), cVar1 == '\0')) {
          local_a8 = FUN_00e7bcc0();
        }
        uVar13 = 0;
      }
      local_b0 = CONCAT44(local_b0._4_4_,uVar13);
      uVar4 = this_ptr[0x2a];
      local_88 = local_40;
      local_70 = uVar4;
      FUN_00e7b820();
      local_68[0] = -1;
      local_68[1] = -1;
      local_68[2] = -1;
      local_68[3] = -1;
      local_50 = '\0';
      local_58 = 0;
      local_78 = uVar4;
      do {
        pVar5 = (void*)uVar8;
        lVar6 = this_ptr[0x2b];
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar8 = local_78;
        cVar1 = FUN_01252960(local_78,local_70,&local_58,&local_98);
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        pVar5 = (void*)uVar8;
        if (cVar1 == '\0') goto LAB_01b79b2b;
      } while (local_58 == 0);
      local_78 = CONCAT44(iStack_94,local_98);
      if (((local_70._4_4_ != 0) && (iStack_94 != 0)) &&
         (cVar1 = FUN_00e7c020(), uVar4 = local_78, cVar1 == '\0')) {
        FUN_00e7b970();
        local_70 = uVar4;
      }
LAB_01b79b2b:
      lVar6 = this_ptr[0x2b];
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar9 = local_80;
      local_38[0] = '\0';
      FUN_012502a0(local_78,local_70,(char)this_ptr[0x36]);
      if ((local_38[0] != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0xa80))(local_78,local_70);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((char)local_b0 == '\0') {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*this_ptr + 0xa50))();
LAB_01b7a003:
  (**(code **)(*(int64_t *)this_ptr[0x29] + 0x478))();
  if (this_ptr[0x29] != 0) {
    this_ptr[0x29] = 0;
    FUN_00d50b20();
  }
  cVar1 = (**(code **)(*this_ptr + 0x998))();
  if (cVar1 != '\0') {
    (**(code **)(*this_ptr + 0x9a8))();
  }
  cVar1 = (**(code **)(*this_ptr + 0x9a0))();
  if (cVar1 != '\0') {
    (**(code **)(*this_ptr + 0x9f0))();
    FUN_01e42250();
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  return;
}

