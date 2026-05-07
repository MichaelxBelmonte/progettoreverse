// Function: FUN_01a8c340
// Address: 01a8c340
// Size: 1621 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01a8c90c) */
/* WARNING: Removing unreachable block (ram,0x01a8c918) */

void FUN_01a8c340(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  void *pvVar6;
  int extraout_var;
  longlong lVar7;
  ulonglong uVar8;
  pthread_key_t pVar9;
  undefined4 *puVar10;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulonglong local_a0;
  undefined4 local_84;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 *local_70;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  undefined4 *local_38;
  
  local_78 = CONCAT44(local_78._4_4_,param_2);
  local_64 = *(int *)((longlong)unaff_RSI + 0x3c);
  local_5c = param_1;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar9 = 0x2572358;
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  local_38 = (undefined4 *)unaff_RSI[6];
  if (local_38 == (undefined4 *)0x0) {
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  local_70 = puVar5;
  FUN_00d50b00();
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*unaff_RSI + 0x3c8))();
  pVar9 = 0;
  FUN_016c45d0(0,0);
  local_60 = 0xffffffff;
  local_84 = 0xffffffff;
  pvVar6 = _pthread_getspecific(pVar9);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pVar9 = (pthread_key_t)local_38;
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*unaff_RSI + 0x3c8))();
  FUN_016c45d0(0,0);
  puVar10 = &local_60;
  local_80 = FUN_016cae50(puVar10,0);
  pvVar6 = _pthread_getspecific((pthread_key_t)puVar10);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    puVar10 = local_38;
  }
  local_a0 = FUN_016caec0();
  do {
    pvVar6 = _pthread_getspecific((pthread_key_t)puVar10);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      puVar10 = local_38;
    }
    iVar1 = (int)local_80;
    uVar8 = FUN_016caec0();
    local_58 = (longlong *)uVar8;
    FUN_00e7b970();
    FUN_00e7c3c0();
    if (0 < local_64) {
      iVar11 = 0;
      do {
        pVar9 = (pthread_key_t)puVar10;
        if (((local_a0 >> 0x20 != 0) && (extraout_var != 0)) &&
           (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
          *unaff_RDI = local_70;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          FUN_00d50b20();
          return;
        }
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar10 = &local_60;
        local_78 = FUN_016c46a0(puVar10,&local_84);
        auVar13._0_8_ = (**(code **)(*unaff_RSI + 0x3c0))();
        auVar13._8_8_ = extraout_XMM0_Qb;
        auVar12._4_12_ = auVar13._4_12_;
        auVar12._0_4_ = (float)auVar13._0_8_ + DAT_0239011c;
        auVar13 = roundss(auVar12,auVar12,9);
        if (iVar11 == 0) {
          local_5c = auVar13._0_4_;
          puVar10 = &local_60;
          cVar4 = FUN_01a8bff0(puVar10,&local_84);
          if (cVar4 == '\0') {
            FUN_01a8b960();
            plVar2 = local_48;
            if (local_40 == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            local_58 = plVar2;
            local_50 = '\0';
            FUN_00d21140();
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_018c3210();
            (**(code **)(*local_48 + 0x378))();
            plVar2 = local_58;
            if (local_50 == '\0') {
              if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
                 (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_50 = '\0';
            }
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01a8b9f0();
            plVar3 = local_48;
            if (local_40 == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            local_58 = plVar3;
            local_50 = '\0';
            FUN_00d21140();
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar3 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_01a8b960(auVar13._0_8_,local_78);
          plVar2 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_58 = plVar2;
          local_50 = '\0';
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_58 = (longlong *)local_a0;
        FUN_00e7b820();
        iVar11 = iVar11 + 1;
        local_a0 = (ulonglong)local_58;
      } while (iVar11 < local_64);
    }
    local_80 = (ulonglong)(iVar1 + 1);
    local_a0 = uVar8;
  } while( true );
}


