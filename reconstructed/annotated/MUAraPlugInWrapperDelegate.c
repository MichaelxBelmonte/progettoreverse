// ===== MUAraPlugInWrapperDelegate — Annotated small functions =====
// 8 readable functions

// ==================================================
// @01694ec0 (1636 bytes) — calculation

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  char *pcVar6;
  longlong arg1;
  longlong *this;
  longlong lVar7;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  if (*(longlong *)(arg1 + 0x98) != 0) {
    FUN_0167ab60();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537ab0();
    iVar1 = *(int *)(local_58 + 0xc);
    if (local_50[0] != '\0') {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (iVar1 == 1) {
      FUN_0167ab60();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537ab0();
      FUN_00d23310();
      lVar7 = local_58;
      pVar5 = CONCAT31((int3)(param_1 >> 8),local_50[0]);
      pcVar6 = local_38;
      if (local_50[0] != '\0') {
        pcVar6 = local_50;
      }
      local_38[0] = local_50[0];
      *pcVar6 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 == 0) {
        lVar7 = 0;
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (local_38[0] == '\0') {
          FUN_00d50b00();
        }
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
        FUN_00d50b20();
      }
    }
    else if (*(int *)(*(longlong *)(arg1 + 0xa8) + 0xc) == 0) {
      if (*(int *)(*(longlong *)(arg1 + 0xb8) + 0xc) == 0) {
        if (*(int *)(*(longlong *)(arg1 + 0xb0) + 0xc) == 0) goto LAB_016954cf;
        FUN_00d23310();
        lVar3 = local_58;
        pVar5 = CONCAT31((int3)(param_1 >> 8),local_50[0]);
        pcVar6 = local_38;
        if (local_50[0] != '\0') {
          pcVar6 = local_50;
        }
        local_38[0] = local_50[0];
        *pcVar6 = '\0';
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01653bd0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8a10();
        lVar7 = local_48;
        if (local_48 == 0) {
          lVar7 = 0;
          bVar2 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
          bVar2 = true;
        }
        if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d23310();
        lVar3 = local_58;
        pVar5 = CONCAT31((int3)(param_1 >> 8),local_50[0]);
        pcVar6 = &local_68;
        if (local_50[0] != '\0') {
          pcVar6 = local_50;
        }
        local_68 = local_50[0];
        *pcVar6 = '\0';
        if ((local_50[0] != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8a10();
        lVar7 = local_48;
        if (local_48 == 0) {
          lVar7 = 0;
          bVar2 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
          bVar2 = true;
        }
        if ((local_68 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d23310();
      lVar3 = local_58;
      pVar5 = CONCAT31((int3)(param_1 >> 8),local_50[0]);
      pcVar6 = local_38;
      if (local_50[0] != '\0') {
        pcVar6 = local_50;
      }
      local_38[0] = local_50[0];
      *pcVar6 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01653bd0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8a10();
      lVar7 = local_48;
      if (local_48 == 0) {
        lVar7 = 0;
        bVar2 = false;
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
        bVar2 = true;
      }
      if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar7 != 0) {
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01710460();
      lVar3 = local_58;
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01710460();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d51d20();
        lVar3 = local_58;
        *(undefined1 *)(this + 1) = 0;
        if (local_50[0] == '\0') {
          if (local_58 == 0) {
            *this = 0;
            *(undefined1 *)(this + 1) = 1;
          }
          else {
            FUN_00d50b00();
            *this = lVar3;
            *(undefined1 *)(this + 1) = 1;
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          *this = local_58;
          *(undefined1 *)(this + 1) = 1;
          local_50[0] = '\0';
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (!bVar2) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if (bVar2) {
        FUN_00d50b20();
      }
    }
  }
LAB_016954cf:
  FUN_0190f240();
  return;
}




// ==================================================
// @01690c50 (1459 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  ulonglong uVar10;
  ulonglong *arg1;
  longlong this;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa;
  longlong local_a0;
  undefined1 local_98;
  longlong local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  longlong local_60;
  longlong local_48;
  char local_40;
  
  uVar13 = FUN_00da7190();
  if ((this == 0) || (*(longlong *)(this + 0x28) == 0)) {
    FUN_016aea20(uVar13,"provided object ref is invalid");
    goto LAB_016911bb;
  }
  FUN_00d50b00();
  cVar7 = FUN_0168a0d0();
  if (cVar7 == '\0') {
    FUN_016aea20(extraout_XMM0_Qa,"call required from document main thread");
  }
  else if (arg1 == (ulonglong *)0x0) {
    FUN_016aea20(extraout_XMM0_Qa,"selection != NULL");
  }
  else if (*arg1 < 0x30) {
    FUN_016aea20(extraout_XMM0_Qa,"selection->structSize >= ARA::kARAViewSelectionMinSize");
  }
  else {
    if (arg1[1] == 0) {
      bVar5 = false;
      lVar11 = 0;
      uVar13 = extraout_XMM0_Qa;
    }
    else {
      if (arg1[2] == 0) {
        FUN_016aea20(extraout_XMM0_Qa,"selection->playbackRegionRefs != NULL");
        goto LAB_016911b3;
      }
      uVar13 = FUN_01691440();
      if (local_48 == 0) {
        lVar11 = 0;
        bVar5 = false;
      }
      else {
        bVar5 = true;
        lVar11 = local_48;
        if (local_40 == '\0') {
          uVar13 = FUN_00d50b00();
        }
      }
      if (arg1[1] != 0) {
        uVar12 = 0;
        do {
          lVar6 = local_48;
          uVar10 = arg1[2];
          if (*(longlong *)(uVar10 + uVar12 * 8) == 0) {
LAB_01690f49:
            FUN_016aea20(uVar10,"provided object ref is invalid");
            goto LAB_016911a1;
          }
          cVar7 = FUN_01658870();
          uVar10 = arg1[2];
          if (cVar7 == '\0') goto LAB_01690f49;
          lVar1 = *(longlong *)(uVar10 + uVar12 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          pvVar8 = _pthread_getspecific((pthread_key_t)uVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_01654a00();
          lVar2 = *(longlong *)(this + 0x98);
          if ((local_40 != '\0') && (local_48 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if (local_48 == lVar2) {
            local_40 = '\0';
            uVar13 = FUN_00d21140();
            local_48 = lVar1;
          }
          else {
            uVar13 = FUN_016aea20(uVar13,
                                  "playbackRegion->getDocumentController() == plugInWrapper->_documentController"
                                 );
          }
          if (lVar1 != 0) {
            uVar13 = FUN_00d50b20();
          }
          if (lVar6 != lVar2) goto LAB_016911a1;
          uVar12 = uVar12 + 1;
        } while (uVar12 < arg1[1]);
      }
    }
    if (arg1[3] == 0) {
      local_60 = 0;
      bVar4 = false;
LAB_0169112b:
      puVar3 = (undefined8 *)arg1[5];
      if (puVar3 == (undefined8 *)0x0) {
        uVar13 = FUN_00e7b500(DAT_023908c8,0);
      }
      else {
        uVar13 = FUN_00e7b500(*puVar3,puVar3[1]);
      }
      local_a0 = local_60;
      local_98 = 0;
      FUN_016914e0(uVar13,&local_a0);
LAB_0169118e:
      if ((bVar4) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (arg1[4] != 0) {
        FUN_00323290();
        local_60 = local_48;
        if (local_48 == 0) {
          bVar4 = false;
          local_60 = 0;
        }
        else {
          bVar4 = true;
          if (local_40 == '\0') {
            FUN_00d50b00();
          }
        }
        if (arg1[3] != 0) {
          uVar12 = 0;
          do {
            lVar6 = local_48;
            uVar10 = arg1[4];
            if (*(longlong *)(uVar10 + uVar12 * 8) == 0) {
LAB_016911d6:
              FUN_016aea20(uVar10,"provided object ref is invalid");
              goto LAB_0169118e;
            }
            cVar7 = FUN_012c91b0();
            uVar10 = arg1[4];
            if (cVar7 == '\0') goto LAB_016911d6;
            lVar1 = *(longlong *)(uVar10 + uVar12 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            pVar9 = (pthread_key_t)uVar10;
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar13 = FUN_012c89b0();
            local_90 = *(longlong *)(this + 0x98);
            if ((local_40 != '\0') && (local_48 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            if (local_48 == local_90) {
              pvVar8 = _pthread_getspecific(pVar9);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012c8f20();
              local_48 = local_88;
              if (local_80 == '\0') {
                if (local_88 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_80 = '\0';
              }
              local_78 = local_48;
              local_40 = '\0';
              FUN_00d21140();
              if (local_78 != 0) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_016aea20(uVar13,
                           "regionSequence->getDocumentController() == plugInWrapper->_documentController"
                          );
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if (lVar6 != local_90) goto LAB_0169118e;
            uVar12 = uVar12 + 1;
          } while (uVar12 < arg1[3]);
        }
        goto LAB_0169112b;
      }
      FUN_016aea20(uVar13,"selection->regionSequenceRefs != NULL");
    }
LAB_016911a1:
    if ((bVar5) && (lVar11 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_016911b3:
  FUN_00d50b20();
LAB_016911bb:
  FUN_00da71b0();
  return;
}




// ==================================================
// @01692ed0 (1245 bytes) — math_loop

{
  longlong *plVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  longlong *this;
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  
  if (this[0x13] != 0) {
    if (this[6] != 0) {
      (**(code **)(*this + 0x5f0))();
    }
    cVar2 = FUN_016ae5f0();
    if (cVar2 != '\0') {
      while( true ) {
        lVar4 = this[0x15];
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        iVar5 = *(int *)(lVar4 + 0xc);
        FUN_00d50b20();
        if (iVar5 == 0) break;
        FUN_00d50b00();
        lVar4 = this[0x15];
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00d23340();
        local_38[0] = local_58[0];
        pcVar3 = local_58;
        if (local_58[0] == '\0') {
          pcVar3 = local_38;
        }
        *pcVar3 = '\0';
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        FUN_0168eed0();
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    if (*(int *)(this[0x17] + 0xc) != 0) {
      do {
        FUN_00d23340();
        local_38[0] = local_58[0];
        pcVar3 = local_58;
        if (local_58[0] == '\0') {
          pcVar3 = local_38;
        }
        *pcVar3 = '\0';
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        FUN_016908b0();
        if (local_60 != 0) {
          FUN_00d50b20();
        }
      } while (*(int *)(this[0x17] + 0xc) != 0);
    }
    if (this[0x15] != 0) {
      local_58[0] = '\0';
      local_48 = 0xffffffff;
      local_40 = 0;
      local_48._4_4_ = 0;
      local_50 = this[0x15];
      while( true ) {
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar5 = -local_48._4_4_;
          }
          else {
            iVar5 = (int)local_48 - local_48._4_4_;
            local_48 = CONCAT44(local_48._4_4_,iVar5);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)(local_50 + 0xc) <= iVar5) break;
        plVar1 = (longlong *)this[5];
        if ((DAT_02723560 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          _DAT_02723548 = "MUAraPlugInWrapperDelegate";
          DAT_02723558 = 0;
          _DAT_02723550 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (longlong *)0x0) {
          lVar4 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x360))();
          lVar4 = FUN_00e86120();
        }
        (**(code **)(*(longlong *)((longlong)plVar1 + lVar4) + 0x30))();
      }
      FUN_00277f20();
    }
    FUN_00d216c0();
    if (this[0x16] != 0) {
      local_58[0] = '\0';
      local_48 = 0xffffffff;
      local_40 = 0;
      iVar5 = 0;
      local_50 = this[0x16];
      while( true ) {
        if (iVar5 != 0) {
          if (iVar5 < 1) {
            iVar5 = -iVar5;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar5);
            FUN_00d23690();
            local_40 = local_40 + iVar5;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)(local_50 + 0xc) <= iVar5) break;
        plVar1 = (longlong *)this[5];
        if ((DAT_02723560 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          _DAT_02723548 = "MUAraPlugInWrapperDelegate";
          DAT_02723558 = 0;
          _DAT_02723550 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (longlong *)0x0) {
          lVar4 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x360))();
          lVar4 = FUN_00e86120();
        }
        (**(code **)(*(longlong *)((longlong)plVar1 + lVar4) + 0x40))();
        iVar5 = local_48._4_4_;
      }
      FUN_00277f20();
    }
    FUN_00d216c0();
    FUN_00d50b00();
    FUN_016897c0();
    if (this != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00e83070();
  }
  FUN_00bd1510();
  return;
}




// ==================================================
// @01693b00 (900 bytes) — calculation

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  longlong this;
  longlong lVar8;
  longlong lVar9;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_78;
  char local_70 [8];
  longlong local_68;
  char local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  char local_38 [8];
  
  if ((*(char *)(this + 0xa7) == '\0') &&
     (FUN_016aea20(param_1,"_isEditorView"), *(char *)(this + 0xa7) == '\0')) {
    uVar3 = 0;
  }
  else {
    *(byte *)(this + 0xa0) = *(byte *)(this + 0xa0) | 4;
    uVar3 = FUN_00bd58a0();
    if ((*(longlong *)(this + 0x98) != 0) && (cVar2 = FUN_016ae5f0(), cVar2 != '\0')) {
      FUN_00da7190();
      if (*(int *)(*(longlong *)(this + 0xa8) + 0xc) != 0) {
        FUN_00b68bb0();
        if (local_78 == 0) {
          cVar2 = '\x01';
        }
        else {
          FUN_00b68bb0();
          cVar2 = FUN_00d45ad0();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_70[0] != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          local_58 = 0;
          lVar8 = 0;
        }
        else {
          FUN_00d23310();
          pVar6 = CONCAT31((int3)((uint)param_1 >> 8),local_70[0]);
          pcVar7 = local_38;
          if (local_70[0] != '\0') {
            pcVar7 = local_70;
          }
          local_38[0] = local_70[0];
          *pcVar7 = '\0';
          if ((local_70[0] != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01653bd0();
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c8f20();
          local_60 = 0;
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          local_60 = '\x01';
          local_68 = local_98;
          uVar5 = FUN_000ba510();
          lVar8 = local_50;
          if (local_50 == 0) {
            local_58 = 0;
          }
          else if (local_48 == '\0') {
            uVar5 = FUN_00d50b00();
            local_58 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_48 = '\0';
            local_58 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar1 = *(longlong *)(this + 0xa8);
        if (lVar1 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_00d50b00();
          lVar9 = *(longlong *)(this + 0xa8);
        }
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        FUN_01653c10();
        FUN_016914e0();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (lVar8 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00da71b0();
    }
  }
  return uVar3;
}




// ==================================================
// @016948c0 (775 bytes) — calculation

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong this;
  longlong *plVar5;
  undefined *local_68;
  uint local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  undefined *local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  if (*(char *)(this + 0xa4) != '\0') {
    *(undefined1 *)(this + 0xa4) = 0;
    plVar5 = *(longlong **)(this + 0x28);
    if ((DAT_02723560 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      _DAT_02723548 = "MUAraPlugInWrapperDelegate";
      DAT_02723558 = 0;
      _DAT_02723550 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      lVar2 = FUN_00e86120();
    }
    (**(code **)(*(longlong *)((longlong)plVar5 + lVar2) + 0x18))();
    local_58 = *(undefined8 *)(this + 0x98);
    local_60 = 1;
    pVar4 = 0x2576920;
    local_68 = &DAT_02576920;
    FUN_00d8cb40(&DAT_02576920,&local_68);
    local_50 = local_30;
    local_48 = 0;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    local_48 = '\x01';
    FUN_00bd69b0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_0167ab60();
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01538260();
    local_40 = local_68;
    local_38 = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (undefined *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
    }
    local_38 = '\x01';
    FUN_00bd78f0();
    if ((local_38 != '\0') && (local_40 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    plVar5 = *(longlong **)(this + 0x28);
    if ((DAT_02723560 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      _DAT_02723548 = "MUAraPlugInWrapperDelegate";
      DAT_02723558 = 0;
      _DAT_02723550 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (longlong *)0x0) {
      lVar2 = *(longlong *)(this + 0x98);
      plVar5 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      lVar2 = FUN_00e86120();
      plVar5 = (longlong *)((longlong)plVar5 + lVar2);
      lVar2 = *(longlong *)(this + 0x98);
    }
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar5 + 0x20))
              (*(undefined1 *)(this + 0xa6),*(undefined1 *)(this + 0xa5),
               *(undefined1 *)(this + 0xa7));
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01691640 (726 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  void *pvVar6;
  longlong arg1;
  longlong this;
  longlong lVar7;
  longlong local_70;
  char local_68;
  longlong local_48;
  char local_40;
  
  lVar3 = local_48;
  FUN_00da7190();
  if ((this == 0) || (*(longlong *)(this + 0x28) == 0)) {
    FUN_016aea20();
    goto LAB_0169190c;
  }
  FUN_00d50b00();
  cVar5 = FUN_0168a0d0();
  if (cVar5 == '\0') {
    FUN_016aea20();
  }
  else {
    FUN_00323290();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if (arg1 == 0) {
LAB_01691888:
      FUN_01691a70();
    }
    else {
      if (param_2 != 0) {
        lVar7 = 0;
        do {
          lVar4 = local_48;
          if ((*(longlong *)(param_2 + lVar7 * 8) == 0) || (cVar5 = FUN_012c91b0(), cVar5 == '\0'))
          {
            FUN_016aea20();
            goto LAB_016918f7;
          }
          lVar1 = *(longlong *)(param_2 + lVar7 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c89b0();
          lVar2 = *(longlong *)(this + 0x98);
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == lVar2) {
            pvVar6 = _pthread_getspecific(param_1);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012c8f20();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_48 = local_70;
            local_40 = '\0';
            FUN_00d21140();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_016aea20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (lVar4 != lVar2) goto LAB_016918f7;
          lVar7 = lVar7 + 1;
        } while (arg1 != lVar7);
        goto LAB_01691888;
      }
      FUN_016aea20();
    }
LAB_016918f7:
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_0169190c:
  FUN_00da71b0();
  return;
}




// ==================================================
// @016908b0 (689 bytes) — math_loop

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong this;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar5 = local_58;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c81e0();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_016909f2;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_016909f2;
  local_50 = '\0';
  local_58 = 0;
  local_40 = -1;
  while( true ) {
    lVar4 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(lVar5 + 0xc) <= local_40) break;
    local_58 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 8 + lVar4 * 8);
    FUN_0168eff0();
  }
  FUN_00277f20();
  param_1 = (pthread_key_t)lVar5;
  FUN_00d50b20();
LAB_016909f2:
  plVar1 = *(longlong **)(this + 0x28);
  if ((DAT_02723560 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_02723548 = "MUAraPlugInWrapperDelegate";
    DAT_02723558 = 0;
    _DAT_02723550 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    lVar5 = FUN_00e86120();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f20();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  (**(code **)(*(longlong *)((longlong)plVar1 + lVar5) + 0x50))();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23f50();
  return;
}




// ==================================================
// @01690310 (611 bytes) — math_loop

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *arg1;
  longlong this;
  
  FUN_016948c0();
  lVar1 = *arg1;
  FUN_00d21140();
  plVar2 = *(longlong **)(this + 0x28);
  if ((DAT_02723560 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_02723548 = "MUAraPlugInWrapperDelegate";
    DAT_02723558 = 0;
    _DAT_02723550 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    lVar4 = FUN_00e86120();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f20();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(longlong *)((longlong)plVar2 + lVar4) + 0x48))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c81e0();
  if (lVar1 != 0) {
    FUN_00d50b00();
    for (iVar3 = 0; iVar3 < *(int *)(lVar1 + 0xc); iVar3 = iVar3 + 1) {
      FUN_0168f6a0();
    }
    FUN_00277f20();
    FUN_00d50b20();
  }
  return;
}



