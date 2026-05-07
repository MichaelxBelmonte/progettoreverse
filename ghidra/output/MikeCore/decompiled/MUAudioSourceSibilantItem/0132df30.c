// Function: FUN_0132df30
// Address: 0132df30
// Size: 2430 bytes
// Class: MUAudioSourceSibilantItem


void FUN_0132df30(pthread_key_t param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  longlong *plVar7;
  char unaff_SIL;
  longlong unaff_RDI;
  undefined8 local_f8;
  undefined1 local_f0;
  longlong local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  uint local_ac;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  longlong local_68;
  char local_60;
  undefined8 local_58;
  undefined1 local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  if (*(longlong *)(unaff_RDI + 0x1f8) != 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x200) != 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x148) == 0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar2 = FUN_0141bab0();
  if (iVar2 != 1) {
    return;
  }
  plVar7 = *(longlong **)(unaff_RDI + 0x38);
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar7 = *(longlong **)(unaff_RDI + 0x38);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  lVar4 = (**(code **)(*plVar7 + 0x378))();
  if (0x7eb851ea < lVar4) {
    return;
  }
  cVar1 = *(char *)(unaff_RDI + 0x1aa);
  if (cVar1 == unaff_SIL) {
    return;
  }
  if (unaff_SIL == '\0') {
    if (cVar1 != '\0') {
      FUN_00d64850();
      *(undefined1 *)(unaff_RDI + 0x1aa) = 0;
      FUN_00d64910();
    }
    lVar4 = local_48;
    if (*(longlong *)(unaff_RDI + 0x40) == 0) goto LAB_0132e873;
    local_98 = (longlong *)(unaff_RDI + 0x40);
    local_50 = 0;
    local_58 = 0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    local_48 = *(longlong *)(unaff_RDI + 0x40);
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar2 = -local_40._4_4_;
        }
        else {
          iVar2 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar2);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar2 = 0;
        }
        local_40 = CONCAT44(iVar2,(int)local_40);
      }
      lVar4 = (longlong)(int)local_40;
      iVar2 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar2);
      if (*(int *)(local_48 + 0xc) <= iVar2) break;
      lVar6 = *(longlong *)(local_48 + 0x10);
      local_58 = *(undefined8 *)(lVar6 + 8 + lVar4 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)lVar6);
      pVar5 = (pthread_key_t)lVar6;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if (local_88 == '\0') {
        if (local_90 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0132e17b;
        }
      }
      else if (local_90 != (longlong *)0x0) {
LAB_0132e17b:
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bd1e0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfef0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e0cc0();
        FUN_00d50b20();
      }
    }
  }
  else {
    if (cVar1 == '\0') {
      FUN_00d64850();
      *(undefined1 *)(unaff_RDI + 0x1aa) = 1;
      FUN_00d64910();
      if (*(char *)(unaff_RDI + 0x1ab) != '\0') goto LAB_0132e040;
LAB_0132e25b:
      FUN_0132ec50();
      lVar6 = *(longlong *)(unaff_RDI + 0x40);
      lVar4 = local_48;
    }
    else {
      if (*(char *)(unaff_RDI + 0x1ab) == '\0') goto LAB_0132e25b;
LAB_0132e040:
      lVar6 = *(longlong *)(unaff_RDI + 0x40);
      lVar4 = local_48;
    }
    local_48 = lVar6;
    if (local_48 == 0) goto LAB_0132e873;
    local_98 = (longlong *)(unaff_RDI + 0x40);
    local_50 = 0;
    local_58 = 0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar2 = -local_40._4_4_;
        }
        else {
          iVar2 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar2);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar2 = 0;
        }
        local_40 = CONCAT44(iVar2,(int)local_40);
      }
      lVar4 = (longlong)(int)local_40;
      iVar2 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar2);
      if (*(int *)(local_48 + 0xc) <= iVar2) break;
      lVar6 = *(longlong *)(local_48 + 0x10);
      local_58 = *(undefined8 *)(lVar6 + 8 + lVar4 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)lVar6);
      pVar5 = (pthread_key_t)lVar6;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if (local_88 == '\0') {
        if (local_90 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0132e36a;
        }
      }
      else if (local_90 != (longlong *)0x0) {
LAB_0132e36a:
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_d8 = '\0';
        local_e0 = 0;
        plVar7 = &local_e0;
        FUN_014c0100(plVar7,1);
        pVar5 = (pthread_key_t)plVar7;
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfef0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e0cc0();
        FUN_00d50b20();
      }
    }
  }
  FUN_001150f0();
  lVar6 = *local_98;
  lVar4 = local_48;
  if (lVar6 != 0) {
    local_50 = 0;
    local_58 = 0;
    local_38 = 0;
    local_40 = 0;
    local_48 = lVar6;
    if (0 < *(int *)(lVar6 + 0xc)) {
      pVar5 = 0;
      local_e8 = lVar6;
      do {
        local_58 = *(undefined8 *)(*(longlong *)(local_e8 + 0x10) + (ulonglong)pVar5 * 8);
        local_ac = pVar5;
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        local_98 = local_90;
        if (local_88 == '\0') {
          if (((local_90 != (longlong *)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
             (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_88 = '\0';
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (local_98 != (longlong *)0x0) {
          local_88 = '\0';
          local_90 = (longlong *)0x0;
          local_80 = local_98;
          local_78 = 0xffffffff;
          local_70 = 0;
          local_78._4_4_ = 0;
          while( true ) {
            if (local_78._4_4_ != 0) {
              if (local_78._4_4_ < 1) {
                iVar2 = -local_78._4_4_;
              }
              else {
                iVar2 = (int)local_78 - local_78._4_4_;
                local_78 = CONCAT44(local_78._4_4_,iVar2);
                FUN_00d23690();
                local_70 = local_70 + local_78._4_4_;
                iVar2 = 0;
              }
              local_78 = CONCAT44(iVar2,(int)local_78);
            }
            lVar4 = (longlong)(int)local_78;
            iVar2 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar2);
            if (*(int *)((longlong)local_80 + 0xc) <= iVar2) break;
            lVar6 = local_80[2];
            local_90 = *(longlong **)(lVar6 + 8 + lVar4 * 8);
            pvVar3 = _pthread_getspecific((pthread_key_t)lVar6);
            pVar5 = (pthread_key_t)lVar6;
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            lVar4 = local_68;
            if (((local_60 == '\0') && (local_68 != 0)) &&
               ((FUN_00d50b00(), local_60 != '\0' && (local_68 != 0)))) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126f610();
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266020(0);
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a5f0();
            local_d0 = lVar4;
            local_c8 = '\0';
            FUN_0039e8b0();
            local_a8 = local_68;
            local_a0 = 0;
            if (local_60 == '\0') {
              if (local_68 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_a0 = '\x01';
            FUN_00e7bdb0();
            FUN_01287c80();
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        pVar5 = local_ac + 1;
        local_40 = CONCAT44(local_40._4_4_,pVar5);
      } while ((int)pVar5 < *(int *)(local_e8 + 0xc));
    }
    FUN_001150f0();
    lVar4 = local_48;
  }
LAB_0132e873:
  local_48 = lVar4;
  local_b8 = '\0';
  local_c0 = (longlong *)0x0;
  local_f8 = 0;
  local_f0 = 0;
  FUN_0132f280(&local_f8,&local_c0,0,0);
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    (**(code **)(*local_c0 + 0x10))();
    FUN_00d50b20();
  }
  return;
}


