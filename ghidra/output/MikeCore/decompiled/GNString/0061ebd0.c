// Function: FUN_0061ebd0
// Address: 0061ebd0
// Size: 2594 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0061eca6) */
/* WARNING: Removing unreachable block (ram,0x0061f5f6) */
/* WARNING: Removing unreachable block (ram,0x0061f603) */
/* WARNING: Removing unreachable block (ram,0x0061f10e) */
/* WARNING: Removing unreachable block (ram,0x0061f11b) */
/* WARNING: Removing unreachable block (ram,0x0061ec36) */
/* WARNING: Removing unreachable block (ram,0x0061ec3f) */
/* WARNING: Removing unreachable block (ram,0x0061f26e) */
/* WARNING: Removing unreachable block (ram,0x0061f277) */
/* WARNING: Removing unreachable block (ram,0x0061f38f) */
/* WARNING: Removing unreachable block (ram,0x0061f398) */
/* WARNING: Removing unreachable block (ram,0x0061f628) */
/* WARNING: Removing unreachable block (ram,0x0061f1cd) */
/* WARNING: Removing unreachable block (ram,0x0061f1f0) */
/* WARNING: Removing unreachable block (ram,0x0061ecb0) */
/* WARNING: Removing unreachable block (ram,0x0061ecd0) */
/* WARNING: Removing unreachable block (ram,0x0061ecb2) */
/* WARNING: Removing unreachable block (ram,0x0061ecd2) */
/* WARNING: Removing unreachable block (ram,0x0061ef05) */
/* WARNING: Removing unreachable block (ram,0x0061ef0e) */
/* WARNING: Removing unreachable block (ram,0x0061f1cf) */
/* WARNING: Removing unreachable block (ram,0x0061f1f2) */

undefined4 FUN_0061ebd0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong local_130;
  double local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  undefined8 *local_c0;
  char local_b8;
  double local_b0;
  double local_a8;
  longlong local_98;
  char local_90;
  undefined4 local_7c;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  char local_40;
  
  plVar1 = local_68;
  FUN_0063f230();
  if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  uVar5 = FUN_00261fb0();
  if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
    uVar5 = FUN_00d50b00();
  }
  local_7c = (undefined4)
             CONCAT71((int7)((ulonglong)uVar5 >> 8),*(int *)((longlong)local_68 + 0xc) != 0);
  cVar2 = FUN_00212c70();
  if (cVar2 == '\0') {
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_58 = plVar1;
    local_50 = -1;
    do {
      local_48 = 0;
      lVar6 = (longlong)local_50;
      local_50 = local_50 + 1;
      param_1 = plVar1;
      if (*(int *)((longlong)plVar1 + 0xc) <= local_50) goto LAB_0061ee1d;
      param_1 = (longlong *)plVar1[2];
      local_68 = (longlong *)param_1[lVar6 + 1];
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d610();
      if (local_78 == 0) {
        bVar10 = true;
      }
      else {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d610();
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_016c2e90();
        bVar10 = iVar3 == 0;
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    } while (!bVar10);
    local_7c = 0;
LAB_0061ee1d:
    FUN_00115190();
  }
  if (param_2 == '\0') {
    FUN_01caeae0();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_68 != (longlong *)0x0) {
      if ((char)local_7c == '\0') {
        FUN_00d8ede0();
        if (local_68 == (longlong *)0x0) {
LAB_0061f39f:
          local_68 = (longlong *)0x0;
          bVar10 = false;
        }
        else {
          bVar10 = true;
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else {
        if (plVar1 == (longlong *)0x0) {
          dVar13 = 0.0;
          dVar12 = DAT_023b2568;
        }
        else {
          local_60 = '\0';
          local_68 = (longlong *)0x0;
          local_50 = -1;
          local_b0 = DAT_023b2568;
          dVar12 = 0.0;
          while( true ) {
            dVar13 = dVar12;
            local_48 = 0;
            lVar6 = (longlong)local_50;
            local_50 = local_50 + 1;
            if (*(int *)((longlong)plVar1 + 0xc) <= local_50) break;
            lVar9 = plVar1[2];
            local_68 = *(longlong **)(lVar9 + 8 + lVar6 * 8);
            pvVar7 = _pthread_getspecific((pthread_key_t)lVar9);
            pVar8 = (pthread_key_t)lVar9;
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0132d610();
            if ((local_70 == '\0') && (local_78 != 0)) {
              FUN_00d50b00();
            }
            pvVar7 = _pthread_getspecific(pVar8);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_a8 = (double)FUN_016c9870();
            pvVar7 = _pthread_getspecific(pVar8);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar12 = (double)FUN_016c9950();
            local_a8 = (double)FUN_00656510(local_a8);
            local_128 = dVar12;
            if (local_78 != 0) {
              FUN_00d50b20();
            }
            dVar11 = local_a8;
            if (local_b0 <= local_a8) {
              dVar11 = local_b0;
            }
            dVar12 = local_128 + local_a8;
            local_b0 = dVar11;
            if (local_128 + local_a8 <= dVar13) {
              dVar12 = dVar13;
            }
          }
          FUN_00115190();
          dVar12 = local_b0;
          local_58 = plVar1;
        }
        FUN_00656660(dVar12,dVar13);
        if (local_68 == (longlong *)0x0) goto LAB_0061f39f;
        bVar10 = true;
        if (local_60 == '\0') {
          FUN_00d50b00();
        }
      }
      lVar6 = DAT_02725a40;
      if (DAT_02725a40 != 0) {
        FUN_00d50b00();
      }
      local_130 = lVar6;
      FUN_00083ea0(2,&local_130);
      FUN_000b4da0();
      if ((local_70 == '\0') && (local_78 != 0)) {
        FUN_00d50b00();
      }
      if ((local_40 != '\0') && (CONCAT44(uStack_44,local_48) != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      lVar6 = DAT_02725a48;
      if (DAT_02725a48 != 0) {
        FUN_00d50b00();
      }
      lVar9 = DAT_02725a50;
      local_f0 = lVar6;
      local_e8 = '\x01';
      if (DAT_02725a50 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar9;
      local_d8 = '\x01';
      local_d0 = local_78;
      local_c8 = '\0';
      FUN_00d31230(&local_d0,&local_e0);
      if (local_60 == '\0') {
        FUN_00d50b00();
      }
      else {
        local_60 = '\0';
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      FUN_01caeae0();
      local_c0 = &DAT_024c5048;
      local_b8 = '\0';
      FUN_01d64eb0();
      if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (local_60 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((bVar10) && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_0061f5ac:
    if (plVar1 == (longlong *)0x0) goto LAB_0061f5b9;
  }
  else {
    if (((char)local_7c == '\0') || (plVar1 == (longlong *)0x0)) goto LAB_0061f5ac;
    if (0 < *(int *)((longlong)plVar1 + 0xc)) {
      iVar3 = 0;
      do {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d610();
        if ((local_70 == '\0') && (local_78 != 0)) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_016c2e90();
        if (iVar4 < 2) {
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016c1150();
          FUN_00d403d0();
          lVar6 = DAT_027ebe30;
          if (DAT_027ebe30 != 0) {
            FUN_00d50b00();
          }
          local_120 = lVar6;
          local_118 = '\x01';
          local_110 = local_78;
          local_108 = '\0';
          local_100 = 0;
          local_f8 = '\0';
          param_1 = &local_100;
          FUN_00d40470(param_1,&local_110,3,3);
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          if ((local_108 != '\0') && (local_110 != 0)) {
            FUN_00d50b20();
          }
          if ((local_118 != '\0') && (local_120 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)((longlong)plVar1 + 0xc));
    }
    FUN_00115190();
  }
  FUN_00d50b20();
LAB_0061f5b9:
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return local_7c;
}


