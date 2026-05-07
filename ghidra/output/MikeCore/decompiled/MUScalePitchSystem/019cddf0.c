// Function: FUN_019cddf0
// Address: 019cddf0
// Size: 2428 bytes
// Class: MUScalePitchSystem
// String references:
//   "MUScalePitchSystem"


/* WARNING: Removing unreachable block (ram,0x019ce6e2) */
/* WARNING: Removing unreachable block (ram,0x019ce6ee) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_019cddf0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong *plVar9;
  int iVar10;
  longlong *unaff_RDI;
  longlong *plVar11;
  longlong *plVar12;
  longlong **pplVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  (**(code **)(*unaff_RDI + 0xe20))();
  plVar12 = local_78;
  if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)((longlong)plVar12 + 0xc) == 0) {
    uVar14 = 0;
    goto LAB_019ce70c;
  }
  pplVar13 = &local_78;
  uVar16 = (**(code **)(*unaff_RDI + 0xa28))();
  plVar11 = local_78;
  if ((DAT_027c0160 == '\0') &&
     (iVar10 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Da_01, iVar10 != 0)) {
    local_50 = plVar12;
    _DAT_0270ab28 = FUN_0015ea50();
    _DAT_0270ab10 = "MUScalePitchSystem";
    _DAT_0270ab18 = 0x78;
    _DAT_0270ab20 = FUN_0015ecf0;
    _DAT_0270ab30 = 0;
    uRam000000000270ab38 = 0;
    _DAT_0270ab40 = 0;
    uRam000000000270ab48 = 0;
    _DAT_0270ab50 = 0;
    uRam000000000270ab58 = 0;
    _DAT_0270ab60 = 0;
    uRam000000000270ab68 = 0;
    _DAT_0270ab70 = 0;
    uRam000000000270ab78 = 0;
    _DAT_0270ab80 = 0;
    uRam000000000270ab88 = 0;
    _DAT_0270ab90 = 0;
    uRam000000000270ab98 = 0;
    _DAT_0270aba0 = 0;
    uRam000000000270aba8 = 0;
    _DAT_0270abb0 = 0;
    uRam000000000270abb8 = 0;
    _DAT_0270abc0 = 0;
    uRam000000000270abc8 = 0;
    _DAT_0270abd0 = 0;
    uVar16 = ___cxa_guard_release();
    plVar12 = local_50;
  }
  if (plVar11 == (longlong *)0x0) {
LAB_019cde95:
    pplVar13 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar16 = extraout_XMM0_Da;
    if (cVar2 == '\0') goto LAB_019cde95;
  }
  plVar11 = *pplVar13;
  if (*(char *)(pplVar13 + 1) == '\0') {
    if (plVar11 != (longlong *)0x0) {
      uVar16 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar13 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  uVar14 = 0;
  if (plVar11 != (longlong *)0x0) {
    local_38 = (longlong *)CONCAT44(local_38._4_4_,param_2);
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = plVar12;
    local_50 = plVar12;
    do {
      iVar10 = (int)uVar14;
      if (iVar10 != 0) {
        if (iVar10 < 1) {
          uVar14 = (ulonglong)(uint)-iVar10;
        }
        else {
          local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar10);
          FUN_00d23690(uVar16,uVar14);
          local_58 = local_58 + local_60._4_4_;
          uVar14 = 0;
        }
        local_60 = CONCAT44((int)uVar14,(int)local_60);
      }
      lVar4 = (longlong)(int)local_60;
      iVar10 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar10);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar10) {
        FUN_001159b0();
        plVar12 = local_50;
        uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
        if ((char)local_38 == '\0') goto LAB_019ce6ff;
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        plVar9 = (longlong *)&DAT_02572358;
        *puVar6 = &DAT_02572358;
        uVar16 = (*DAT_02572370)();
        uVar16 = (**(code **)(*unaff_RDI + 0x9b0))(uVar16,1);
        plVar1 = local_78;
        if (local_70 == '\0') {
          if (local_78 == (longlong *)0x0) goto LAB_019ce69b;
          FUN_00d50b00();
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_78 == (longlong *)0x0) goto LAB_019ce69b;
        local_70 = '\0';
        local_78 = (longlong *)0x0;
        local_68 = plVar1;
        local_58 = 0;
        local_60 = 0;
        local_38 = plVar11;
        if (0 < *(int *)((longlong)plVar1 + 0xc)) {
          lVar4 = 0;
          do {
            plVar12 = *(longlong **)(plVar1[2] + lVar4 * 8);
            local_78 = plVar12;
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            plVar11 = local_48;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar11 == (longlong *)0x0) {
              pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar16 = FUN_0125a2c0();
              pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
              plVar11 = local_38;
              if ((pvVar5 != (void *)0x0) &&
                 (lVar7 = FUN_00e8b990(), plVar11 = local_38, lVar7 != 0)) {
                plVar9 = local_38;
                plVar11 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              (**(code **)(*plVar11 + 0x3a8))(uVar16);
            }
            else {
              pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e930();
              pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0152ebe0();
              pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01507f00();
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
            }
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar9 = local_38;
            }
            cVar2 = FUN_017516f0();
            if (cVar2 != '\0') {
              local_40 = '\0';
              local_48 = plVar12;
              FUN_00d21140();
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            lVar4 = lVar4 + 1;
            local_60 = CONCAT44(local_60._4_4_,(int)lVar4);
          } while ((int)lVar4 < *(int *)((longlong)plVar1 + 0xc));
        }
        FUN_001159b0();
        uVar16 = FUN_00d50b20();
        plVar12 = local_50;
LAB_019ce69b:
        if (*(int *)((longlong)puVar6 + 0xc) != 0) {
          (**(code **)(*unaff_RDI + 0xdb8))(uVar16,1);
        }
        FUN_00d50b20();
        goto LAB_019ce6ff;
      }
      lVar7 = local_68[2];
      local_78 = *(longlong **)(lVar7 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
      pVar8 = (pthread_key_t)lVar7;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      if (local_48 == (longlong *)0x0) {
        bVar15 = true;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar10 = FUN_0132dd30();
        bVar15 = iVar10 == 0;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar15) goto LAB_019ce306;
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      plVar12 = local_48;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar12 == (longlong *)0x0) {
        pvVar5 = _pthread_getspecific(pVar8);
        plVar12 = plVar11;
        if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar12 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a2c0();
        uVar16 = (**(code **)(*plVar12 + 0x3a8))();
        if ((int)local_60 != 0 || local_58 != 0) goto LAB_019ce276;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar16 = FUN_01507f00();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          uVar16 = FUN_00d50b20();
        }
        if ((int)local_60 != 0 || local_58 != 0) {
LAB_019ce276:
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar10 = FUN_01751520();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar3 = FUN_01751520();
          uVar16 = extraout_XMM0_Da_00;
          if (iVar10 != iVar3) goto LAB_019ce306;
        }
      }
      uVar14 = local_60 >> 0x20;
    } while( true );
  }
LAB_019ce70c:
  FUN_00d50b20();
  return uVar14;
LAB_019ce306:
  FUN_001159b0();
  uVar14 = 0;
  plVar12 = local_50;
LAB_019ce6ff:
  FUN_00d50b20();
  if (plVar12 == (longlong *)0x0) {
    return uVar14;
  }
  goto LAB_019ce70c;
}


