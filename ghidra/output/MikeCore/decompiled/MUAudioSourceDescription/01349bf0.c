// Function: FUN_01349bf0
// Address: 01349bf0
// Size: 1386 bytes
// Class: MUAudioSourceDescription


void FUN_01349bf0(pthread_key_t param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong *plVar8;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  longlong *local_88;
  char local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  
  if (*(longlong *)(unaff_RDI + 0x1f8) != 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x200) != 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x148) == 0) {
LAB_01349fcd:
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
    if (iVar2 != 3) {
      return;
    }
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_0141bab0();
    if (iVar2 != 1) {
      if (*(longlong *)(unaff_RDI + 0x1f8) != 0) {
        return;
      }
      goto LAB_01349fcd;
    }
  }
  plVar8 = *(longlong **)(unaff_RDI + 0x38);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar8 = *(longlong **)(unaff_RDI + 0x38);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar8 + 0x370))();
  lVar4 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar4 != 0) {
    FUN_00d50b00();
    local_70 = 0;
    local_78 = 0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = lVar4;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar2 = -local_60._4_4_;
        }
        else {
          iVar2 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar2);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar2 = 0;
        }
        local_60 = CONCAT44(iVar2,(int)local_60);
      }
      lVar5 = (longlong)(int)local_60;
      iVar2 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar2);
      if (*(int *)(local_68 + 0xc) <= iVar2) break;
      lVar7 = *(longlong *)(local_68 + 0x10);
      local_78 = *(undefined8 *)(lVar7 + 8 + lVar5 * 8);
      cVar1 = FUN_01347c70();
      pVar6 = (pthread_key_t)lVar7;
      if (cVar1 == '\0') {
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        plVar8 = local_88;
        if (local_80 == '\0') {
          if (local_88 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01349e07;
          }
        }
        else if (local_88 != (longlong *)0x0) {
LAB_01349e07:
          pvVar3 = _pthread_getspecific(pVar6);
          plVar9 = plVar8;
          if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar9 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          fVar10 = (float)(**(code **)(*plVar9 + 0x3e0))();
          if (!NAN(fVar10)) {
            pvVar3 = _pthread_getspecific(pVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00d50b00();
            pVar6 = 1;
            FUN_014d9720(1,1);
            if (unaff_RDI != 0) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(pVar6);
            plVar9 = plVar8;
            if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar9 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            fVar11 = (float)(**(code **)(*plVar9 + 0x3e0))();
            if (NAN(fVar11)) {
              pvVar3 = _pthread_getspecific(pVar6);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014bd3c0(fVar10);
            }
            pvVar3 = _pthread_getspecific(pVar6);
            if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            fVar11 = (float)(**(code **)(*plVar8 + 0x3e0))();
            FUN_01348960(fVar11 - fVar10);
          }
          FUN_00d50b20();
        }
      }
    }
    lVar5 = local_68;
    FUN_001150f0();
    param_1 = (pthread_key_t)lVar5;
  }
  if (unaff_SIL == '\0') goto LAB_0134a0c6;
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RDI + 0x148) != 0)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_0141bab0();
    if (iVar2 != 3) goto LAB_0134a061;
  }
  else {
LAB_0134a061:
    cVar1 = FUN_01334f30();
    if (cVar1 == '\0') goto LAB_0134a0c6;
  }
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_0134a250(&local_98,&local_a8,0,0,0,0);
LAB_0134a0c6:
  if (*(char *)(unaff_RDI + 0x141) != '\x01') {
    FUN_00d64850();
    *(undefined1 *)(unaff_RDI + 0x141) = 1;
    FUN_00d64910();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}


