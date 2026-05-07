// Function: FUN_002aa8c0
// Address: 002aa8c0
// Size: 3894 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x002ab69d) */
/* WARNING: Removing unreachable block (ram,0x002ab6a9) */
/* WARNING: Removing unreachable block (ram,0x002ab597) */
/* WARNING: Removing unreachable block (ram,0x002ab259) */
/* WARNING: Removing unreachable block (ram,0x002ab265) */
/* WARNING: Removing unreachable block (ram,0x002ab19c) */
/* WARNING: Removing unreachable block (ram,0x002ab1a8) */
/* WARNING: Removing unreachable block (ram,0x002ab34e) */
/* WARNING: Removing unreachable block (ram,0x002ab35a) */
/* WARNING: Removing unreachable block (ram,0x002ab3e7) */
/* WARNING: Removing unreachable block (ram,0x002ab3f3) */
/* WARNING: Removing unreachable block (ram,0x002ab5a3) */
/* WARNING: Removing unreachable block (ram,0x002ab795) */
/* WARNING: Removing unreachable block (ram,0x002ab7a1) */

void FUN_002aa8c0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar8;
  bool bVar9;
  longlong local_d8;
  char local_d0;
  longlong local_a8;
  char local_a0;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0x618))();
  iVar7 = *(int *)((longlong)local_70 + 0xc);
  if ((char)local_68 != '\0') {
    FUN_00d50b20();
  }
  if (iVar7 == 1) {
    (**(code **)(*unaff_RDI + 0x618))();
    FUN_00d23310();
    plVar8 = local_70;
    param_1 = &local_68;
    local_38[0] = (char)local_68;
    plVar2 = (longlong *)local_38;
    if ((char)local_68 != '\0') {
      plVar2 = param_1;
    }
    *(undefined1 *)plVar2 = 0;
    if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar8 + 0x628))();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    plVar8 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (CONCAT71(local_a8._1_7_,(char)local_a8) != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (*(int *)((longlong)local_48 + 0xc) == 1) {
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_00d23310();
      plVar2 = local_70;
      param_1 = &local_68;
      plVar6 = &local_a8;
      if ((char)local_68 != '\0') {
        plVar6 = param_1;
      }
      local_a8._0_1_ = (char)local_68;
      *(undefined1 *)plVar6 = 0;
      if (((char)local_68 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      bVar9 = *(int *)(CONCAT71(local_80._1_7_,(char)local_80) + 0xc) == 0;
      if (local_78 != '\0') {
        FUN_00d50b20();
      }
      if (((char)local_a8 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      bVar9 = false;
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar9) {
      (**(code **)(*unaff_RDI + 0x618))();
      FUN_00d23310();
      plVar2 = local_70;
      param_1 = &local_68;
      if ((char)local_68 == '\0') {
        param_1 = &local_80;
      }
      local_80._0_1_ = (char)local_68;
      *(undefined1 *)param_1 = 0;
      if (((char)local_68 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (longlong *)0x0) {
        plVar2 = (longlong *)0x0;
        bVar9 = false;
      }
      else {
        bVar9 = true;
        if ((char)local_80 == '\0') {
          FUN_00d50b00();
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      bVar9 = false;
      plVar2 = (longlong *)0x0;
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) goto LAB_002aaf4e;
  }
  else {
    bVar9 = false;
  }
  (**(code **)(*unaff_RDI + 0x618))();
  plVar8 = local_70;
  if ((char)local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_002aad66;
    }
  }
  else if (local_70 != (longlong *)0x0) {
LAB_002aad66:
    local_68._0_1_ = '\0';
    local_70 = (longlong *)0x0;
    local_60 = plVar8;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    do {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar7 = -local_58._4_4_;
        }
        else {
          iVar7 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar7);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar7 = 0;
        }
        local_58 = CONCAT44(iVar7,(int)local_58);
      }
      lVar4 = (longlong)(int)local_58;
      iVar7 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar7);
      param_1 = local_60;
      if (*(int *)((longlong)local_60 + 0xc) <= iVar7) goto LAB_002aaf1f;
      param_1 = (longlong *)local_60[2];
      local_70 = (longlong *)param_1[lVar4 + 1];
      plVar8 = (longlong *)*param_2;
      (**(code **)(*local_70 + 0x468))();
      plVar2 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      cVar1 = (**(code **)(*plVar8 + 0x50))();
      plVar8 = local_70;
      if (cVar1 == '\0') {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar6 = (longlong *)*unaff_RSI;
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar2 = local_70;
        if (plVar8 != plVar6) goto LAB_002aaf00;
      }
    } while( true );
  }
  plVar2 = (longlong *)0x0;
  goto LAB_002aaf4e;
LAB_002aaf00:
  if (local_70 == (longlong *)0x0) {
LAB_002aaf1f:
    plVar2 = (longlong *)0x0;
  }
  else {
    if ((char)local_68 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_68._0_1_ = '\0';
    }
    bVar9 = true;
  }
  FUN_002b3090();
  FUN_00d50b20();
LAB_002aaf4e:
  cVar1 = FUN_0078e150();
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)*unaff_RSI + 0x628))();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    plVar8 = local_70;
    pVar5 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)local_68);
    plVar6 = (longlong *)local_38;
    if ((char)local_68 != '\0') {
      plVar6 = &local_68;
    }
    local_38[0] = (char)local_68;
    *(undefined1 *)plVar6 = 0;
    if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (CONCAT71(local_a8._1_7_,(char)local_a8) != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_004f9670();
      plVar8 = local_70;
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*unaff_RSI + 0x628))();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a5250();
        FUN_004405c0();
        FUN_004b8020();
        plVar8 = local_70;
        if ((char)local_68 == '\0') {
          if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_68 != '\0')) &&
             (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68._0_1_ = '\0';
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
          FUN_00d50b20();
        }
        if (plVar8 == (longlong *)0x0) {
          FUN_003b6860();
          if (local_70 != (longlong *)0x0) {
            plVar8 = local_70;
            if ((char)local_68 == '\0') {
              FUN_00d50b00();
              if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_68._0_1_ = '\0';
            }
          }
          (**(code **)(*(longlong *)*unaff_RSI + 0x628))();
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004a5250();
          FUN_004405c0();
          FUN_004b7a60();
          if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
            FUN_00d50b20();
          }
        }
        if (plVar8 != (longlong *)0x0) {
          FUN_003b72f0();
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x498))();
  FUN_00cafd20();
  if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00757320();
  (**(code **)(*unaff_RDI + 0x5e0))();
  plVar8 = local_70;
  if ((char)local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68._0_1_ = '\0';
  }
  FUN_002ac220();
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00756aa0();
  (**(code **)(*(longlong *)*unaff_RSI + 0x498))();
  FUN_00cb1fa0();
  if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x498))();
  FUN_00cb1f10();
  FUN_00db3760();
  if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x498))();
  (**(code **)(*local_70 + 0x3c8))();
  if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*param_2 != 0) {
    FUN_01f27fe0();
    (**(code **)(*local_70 + 0x548))();
    if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x5e0))();
    plVar6 = local_48;
    (**(code **)(*plVar2 + 0x610))();
    FUN_00d23310();
    plVar8 = local_70;
    plVar2 = &local_90;
    if ((char)local_68 != '\0') {
      plVar2 = &local_68;
    }
    local_90._0_1_ = (char)local_68;
    *(undefined1 *)plVar2 = 0;
    if (((char)local_68 != '\0') && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_90 == '\0') && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar6 + 0x628))();
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar9) {
      FUN_00d50b20();
    }
  }
  return;
}


