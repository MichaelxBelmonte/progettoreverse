// Function: FUN_019aa080
// Address: 019aa080
// Size: 1235 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019aa2a2) */
/* WARNING: Removing unreachable block (ram,0x019aa2ae) */
/* WARNING: Removing unreachable block (ram,0x019aa53f) */
/* WARNING: Removing unreachable block (ram,0x019aa54b) */

void FUN_019aa080(undefined8 param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar10;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong local_40;
  char local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar8 = (longlong *)&DAT_02572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  plVar5 = (longlong *)unaff_RSI[0x3d];
  iVar3 = *(int *)((longlong)plVar5 + 0xc);
  if (iVar3 == 1) {
    FUN_00d23310();
    lVar7 = local_68;
    local_40 = CONCAT71(local_40._1_7_,local_60[0]);
    plVar5 = &local_40;
    if (local_60[0] != '\0') {
      plVar5 = (longlong *)local_60;
    }
    *(char *)plVar5 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 == '\0') && (lVar7 != 0)) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*unaff_RSI + 0x9a0))();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_00d23310();
      lVar7 = local_68;
      plVar8 = &local_78;
      plVar5 = (longlong *)local_60;
      if (local_60[0] == '\0') {
        plVar5 = plVar8;
      }
      local_78._0_1_ = local_60[0];
      *(char *)plVar5 = '\0';
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)plVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      lVar9 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = lVar9;
      local_60[0] = '\0';
      FUN_00d214d0();
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_78 != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_019aa40b;
    }
    plVar5 = (longlong *)unaff_RSI[0x3d];
    iVar3 = *(int *)((longlong)plVar5 + 0xc);
  }
  if (1 < iVar3) {
    local_60[0] = '\0';
    local_68 = 0;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    local_58 = plVar5;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar3 = -local_50._4_4_;
        }
        else {
          iVar3 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar3);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar3 = 0;
        }
        local_50 = CONCAT44(iVar3,(int)local_50);
      }
      lVar7 = (longlong)(int)local_50;
      iVar3 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar3);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar3) break;
      lVar9 = local_58[2];
      local_68 = *(longlong *)(lVar9 + 8 + lVar7 * 8);
      cVar2 = (**(code **)(*unaff_RSI + 0x9a0))();
      if (cVar2 != '\0') {
        pvVar6 = _pthread_getspecific((pthread_key_t)lVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        lVar7 = CONCAT71(local_78._1_7_,(char)local_78);
        if (local_70 == '\0') {
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_38 = '\0';
        local_40 = lVar7;
        FUN_00d214d0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
          FUN_00d50b20();
        }
      }
    }
    plVar8 = local_58;
    FUN_000be170();
  }
LAB_019aa40b:
  iVar3 = (**(code **)(*unaff_RSI + 0x9f0))();
  if (((puVar4 != (undefined8 *)0x0) && (iVar3 != 0)) && (0 < *(int *)((longlong)puVar4 + 0xc))) {
    uVar10 = (ulonglong)(*(int *)((longlong)puVar4 + 0xc) - 1);
    if (iVar3 == 1) {
      do {
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_01263cf0();
        if (cVar2 != '\0') {
          FUN_00d23620();
        }
        bVar1 = 0 < (longlong)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
    else {
      do {
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_01263cf0();
        if (cVar2 == '\0') {
          FUN_00d23620();
        }
        bVar1 = 0 < (longlong)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
  }
  if ((puVar4 != (undefined8 *)0x0) && (param_2 != '\0')) {
    (**(code **)(&UNK_00001630 + *unaff_RSI))();
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


