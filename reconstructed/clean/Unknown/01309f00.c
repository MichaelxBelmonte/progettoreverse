// Function: FUN_01309f00
// Address: 01309f00
// Size: 3176 bytes
// Class: Unknown

void FUN_01309f00(uint64_t param_1)

{
  uint64_t uVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  char *pcVar5;
  void* pVar6;
  uint uVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int iVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  bool bVar15;
  bool bVar16;
  uint64_t local_98;
  char local_90 [8];
  uint64_t local_88;
  uint64_t local_80;
  int local_78;
  uint64_t local_70;
  char local_68 [8];
  uint64_t local_60;
  int local_58;
  uint uStack_54;
  int local_50;
  char local_48 [8];
  uint64_t local_40;
  uint64_t local_38;
  
  lVar4 = this_ptr[0x1e];
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = this_ptr[0x1e];
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  uVar13 = *(uint64_t *)(lVar4 + 0x118);
  if (uVar13 != 0) {
    FUN_00d50b00();
  }
  local_38 = uVar13;
  if ((int64_t *)this_ptr[0x20] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x20] + 0x6b0))();
    uVar13 = local_70;
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (uVar13 != local_38) {
      (**(code **)(*(int64_t *)this_ptr[0x20] + 0x678))();
      FUN_00d216c0();
      FUN_00d216c0();
      uVar13 = this_ptr[0x20];
      if (uVar13 != 0) {
        FUN_00d50b00();
      }
      local_68[0] = '\0';
      local_70 = uVar13;
      FUN_00d21140();
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (uVar13 != 0) {
        FUN_00d50b20();
      }
      if (this_ptr[0x20] != 0) {
        this_ptr[0x20] = 0;
        FUN_00d50b20();
      }
    }
  }
  if (local_38 == 0) {
LAB_0130a19f:
    plVar12 = (int64_t *)this_ptr[0x20];
    if (plVar12 != (int64_t *)0x0) goto LAB_0130a1ab;
  }
  else {
    plVar12 = (int64_t *)this_ptr[0x20];
    if (plVar12 == (int64_t *)0x0) {
      if (*arg1 != 0) {
        FUN_00c9fe40();
        uVar13 = local_70;
        param_1 = CONCAT71((int7)((uint64_t)param_1 >> 8),local_68[0]);
        puVar9 = &local_98;
        if (local_68[0] != '\0') {
          puVar9 = (uint64_t *)local_68;
        }
        local_98 = CONCAT71(local_98._1_7_,local_68[0]);
        *(char *)puVar9 = '\0';
        if ((local_68[0] != '\0') && (uVar13 != 0)) {
          FUN_00d50b20();
        }
        uVar14 = this_ptr[0x20];
        if (uVar14 == uVar13) {
          if (((char)local_98 != '\0') && (uVar13 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_98 == '\0') {
            if (uVar13 != 0) {
              FUN_00d50b00();
              uVar14 = this_ptr[0x20];
            }
          }
          else {
            local_98 = local_98 & 0xffffffffffffff00;
          }
          this_ptr[0x20] = uVar13;
          if (uVar14 != 0) {
            FUN_00d50b20();
          }
        }
        if (this_ptr[0x20] != 0) {
          FUN_00ca13a0();
          goto LAB_0130a19f;
        }
      }
      (**(code **)(*this_ptr + 0x660))();
      goto LAB_0130a19f;
    }
LAB_0130a1ab:
    (**(code **)(*plVar12 + 0x6c8))();
  }
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  pVar6 = (void*)param_1;
  local_40 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0130a27a;
    }
    if (this_ptr[0x21] == 0) goto LAB_0130a529;
LAB_0130a291:
    puVar9 = (uint64_t *)(this_ptr + 0x21);
    FUN_013e9df0();
    uVar13 = local_70;
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (uVar13 == local_40) {
LAB_0130a31d:
      uVar13 = *puVar9;
    }
    else {
      uVar13 = *puVar9;
      if (uVar13 != 0) {
        FUN_00d50b00();
      }
      local_68[0] = '\0';
      local_70 = uVar13;
      FUN_00d21140();
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (uVar13 != 0) {
        FUN_00d50b20();
      }
      uVar13 = 0;
      if (*puVar9 != 0) {
        *puVar9 = 0;
        FUN_00d50b20();
        goto LAB_0130a31d;
      }
    }
    pVar6 = (void*)param_1;
    if (uVar13 == 0) goto LAB_0130a32a;
  }
  else {
LAB_0130a27a:
    if (this_ptr[0x21] != 0) goto LAB_0130a291;
LAB_0130a32a:
    pVar6 = (void*)param_1;
    puVar9 = (uint64_t *)(this_ptr + 0x21);
    if (local_40 != 0) {
      if (*arg1 != 0) {
        FUN_00c9fe40();
        uVar13 = local_70;
        pVar6 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_68[0]);
        puVar10 = &local_98;
        if (local_68[0] != '\0') {
          puVar10 = (uint64_t *)local_68;
        }
        local_98 = CONCAT71(local_98._1_7_,local_68[0]);
        *(char *)puVar10 = '\0';
        if ((local_68[0] != '\0') && (uVar13 != 0)) {
          FUN_00d50b20();
        }
        uVar14 = *puVar9;
        if (uVar14 == uVar13) {
          if (((char)local_98 != '\0') && (uVar13 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_98 == '\0') {
            if (uVar13 != 0) {
              FUN_00d50b00();
              uVar14 = *puVar9;
            }
          }
          else {
            local_98 = local_98 & 0xffffffffffffff00;
          }
          *puVar9 = uVar13;
          if (uVar14 != 0) {
            FUN_00d50b20();
          }
        }
        if (*puVar9 != 0) {
          FUN_00ca13a0();
          goto LAB_0130a4a9;
        }
      }
      (**(code **)(*this_ptr + 0x660))();
    }
  }
LAB_0130a4a9:
  if (this_ptr[0x21] != 0) {
    FUN_013ea3f0();
  }
LAB_0130a529:
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  uVar13 = local_70;
  if ((((local_68[0] == '\0') && (local_70 != 0)) && (FUN_00d50b00(), local_68[0] != '\0')) &&
     (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1f] != 0) {
    local_68[0] = '\0';
    local_70 = 0;
    local_58 = -1;
    uStack_54 = 0;
    local_50 = 0;
    local_60 = this_ptr[0x1f];
LAB_0130a62c:
    lVar4 = (int64_t)local_58;
    local_58 = local_58 + 1;
    if (local_58 < *(int *)(local_60 + 0xc)) {
      local_70 = *(uint64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar4 * 8);
      if (uVar13 != 0) {
        local_90[0] = '\0';
        local_98 = 0;
        local_88 = uVar13;
        local_80 = 0xffffffff;
        local_78 = 0;
        iVar8 = 0;
        while( true ) {
          lVar4 = (int64_t)(int)local_80;
          iVar11 = (int)local_80 + 1;
          local_80 = CONCAT44(local_80._4_4_,iVar11);
          if (*(int *)(local_88 + 0xc) <= iVar11) break;
          local_98 = *(uint64_t *)(*(int64_t *)(local_88 + 0x10) + 8 + lVar4 * 8);
          uVar14 = *(uint64_t *)(local_70 + 0xf0);
          if (uVar14 == 0) {
            iVar11 = iVar8;
            if (local_98 == 0) goto LAB_0130a5e0;
          }
          else {
            FUN_00d50b00();
            uVar1 = local_98;
            FUN_00d50b20();
            if (uVar14 == uVar1) {
LAB_0130a5e0:
              FUN_000be170();
              bVar16 = (int)uStack_54 < 0;
              bVar15 = false;
              if (uStack_54 != 0) goto LAB_0130a5ef;
              goto LAB_0130a62c;
            }
            iVar11 = local_80._4_4_;
          }
          iVar8 = 0;
          if (iVar11 != 0) {
            if (iVar11 < 1) {
              iVar8 = -iVar11;
            }
            else {
              local_80._4_4_ = (int)((uint64_t)local_80 >> 0x20);
              local_80 = CONCAT44(local_80._4_4_,(int)local_80 - iVar11);
              FUN_00d23690();
              local_78 = local_78 + local_80._4_4_;
              iVar8 = 0;
            }
            local_80 = CONCAT44(iVar8,(int)local_80);
          }
        }
        FUN_000be170();
      }
      local_98 = local_70;
      local_90[0] = '\0';
      FUN_00d21140();
      if ((local_90[0] != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      uVar7 = ~uStack_54;
      bVar16 = -1 < (int)uStack_54;
      bVar15 = uVar7 == 0;
      uStack_54 = uVar7;
      if (!bVar15) {
LAB_0130a5ef:
        if (bVar15 || bVar16) {
          uStack_54 = -uStack_54;
        }
        else {
          local_58 = local_58 - uStack_54;
          FUN_00d23690();
          local_50 = local_50 + uStack_54;
          uStack_54 = 0;
        }
      }
      goto LAB_0130a62c;
    }
    FUN_01312d90();
  }
  if (uVar13 != 0) {
    local_68[0] = '\0';
    local_70 = 0;
    local_60 = uVar13;
    local_58 = -1;
    uStack_54 = 0;
    local_50 = 0;
LAB_0130a7df:
    if (uStack_54 != 0) {
      if ((int)uStack_54 < 1) {
        uStack_54 = -uStack_54;
      }
      else {
        local_58 = local_58 - uStack_54;
        FUN_00d23690();
        local_50 = local_50 + uStack_54;
        uStack_54 = 0;
      }
    }
    lVar4 = (int64_t)local_58;
    local_58 = local_58 + 1;
    if (local_58 < *(int *)(local_60 + 0xc)) {
      local_70 = *(uint64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar4 * 8);
      if (this_ptr[0x1f] != 0) {
        local_90[0] = '\0';
        local_98 = 0;
        local_80 = 0xffffffff;
        local_78 = 0;
        iVar8 = 0;
        local_88 = this_ptr[0x1f];
        while( true ) {
          lVar4 = (int64_t)(int)local_80;
          iVar11 = (int)local_80 + 1;
          local_80 = CONCAT44(local_80._4_4_,iVar11);
          if (*(int *)(local_88 + 0xc) <= iVar11) break;
          local_98 = *(uint64_t *)(*(int64_t *)(local_88 + 0x10) + 8 + lVar4 * 8);
          uVar14 = *(uint64_t *)(local_98 + 0xf0);
          if (uVar14 == 0) {
            iVar11 = iVar8;
            if (local_70 == 0) goto LAB_0130a7d0;
          }
          else {
            FUN_00d50b00();
            uVar1 = local_70;
            FUN_00d50b20();
            if (uVar14 == uVar1) {
LAB_0130a7d0:
              FUN_01312d90();
              goto LAB_0130a7df;
            }
            iVar11 = local_80._4_4_;
          }
          iVar8 = 0;
          if (iVar11 != 0) {
            if (iVar11 < 1) {
              iVar8 = -iVar11;
            }
            else {
              local_80._4_4_ = (int)((uint64_t)local_80 >> 0x20);
              local_80 = CONCAT44(local_80._4_4_,(int)local_80 - iVar11);
              FUN_00d23690();
              local_78 = local_78 + local_80._4_4_;
              iVar8 = 0;
            }
            local_80 = CONCAT44(iVar8,(int)local_80);
          }
        }
        FUN_01312d90();
      }
      if (*arg1 != 0) {
        FUN_00c9fe40();
        uVar14 = local_98;
        local_48[0] = local_90[0];
        pcVar5 = local_90;
        if (local_90[0] == '\0') {
          pcVar5 = local_48;
        }
        *pcVar5 = '\0';
        if ((local_90[0] != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if (uVar14 == 0) {
          bVar16 = true;
          uVar14 = 0;
        }
        else {
          if (local_48[0] == '\0') {
            FUN_00d50b00();
          }
          bVar16 = false;
        }
        if (uVar14 != 0) {
          FUN_00ca13a0();
          local_90[0] = '\0';
          local_98 = uVar14;
          FUN_00d21140();
          if ((local_90[0] != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          FUN_012dd9c0();
          if (this_ptr[0x22] == 0) {
            FUN_01308b50();
          }
          else {
            FUN_011edcb0();
            FUN_01308b50();
          }
          if (!bVar16) {
            FUN_00d50b20();
          }
          goto LAB_0130a7df;
        }
      }
      (**(code **)(*this_ptr + 0x660))();
      goto LAB_0130a7df;
    }
    FUN_000be170();
  }
  uVar14 = this_ptr[0x1f];
  if (uVar14 != 0) {
    local_68[0] = '\0';
    local_70 = 0;
    uStack_54 = 0;
    local_50 = 0;
    local_60 = uVar14;
    for (lVar4 = 0; local_58 = (int)lVar4, local_58 < *(int *)(uVar14 + 0xc); lVar4 = lVar4 + 1) {
      local_70 = *(uint64_t *)(*(int64_t *)(uVar14 + 0x10) + lVar4 * 8);
      FUN_01309f00();
    }
    FUN_01312d90();
  }
  if (uVar13 != 0) {
    FUN_00d50b20();
  }
  uVar13 = local_38;
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (uVar13 != 0) {
    FUN_00d50b20();
  }
  return;
}

