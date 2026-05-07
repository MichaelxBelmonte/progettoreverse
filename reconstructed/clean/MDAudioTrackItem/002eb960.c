// Function: FUN_002eb960
// Address: 002eb960
// Size: 1436 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_002eb960(uint64_t param_1,double param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t *this_ptr;
  int64_t *plVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  int64_t lVar8;
  double dVar9;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_d8;
  char local_d0;
  int64_t local_c0;
  char local_b8;
  double local_b0;
  double local_a8;
  int64_t *local_a0;
  char local_98;
  double local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  uint64_t local_70;
  int local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  
  FUN_01beab60();
  if (local_60 == (int64_t *)0x0) {
    bVar5 = true;
  }
  else {
    FUN_01beab60();
    FUN_01d97e80();
    FUN_00d3ecf0();
    bVar5 = local_88 != local_100;
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar5) {
    return;
  }
  FUN_01be8230();
  FUN_01a3c5a0();
  plVar4 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      (**(code **)(*local_60 + 0x10))();
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        (**(code **)(*local_60 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((plVar4 == (int64_t *)0x0) || (cVar2 = (**(code **)(*plVar4 + 0xb0))(), cVar2 == '\0')) {
    FUN_01beead0();
    plVar1 = local_60;
    if (local_58 == '\0') {
      if (local_60 == (int64_t *)0x0) goto LAB_002ebf0a;
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_60 == (int64_t *)0x0) goto LAB_002ebf0a;
    local_38 = plVar4;
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = plVar1;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_90 = 0.0;
    local_48._4_4_ = 0;
    local_a8 = 0.0;
    bVar5 = false;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar3 = -local_48._4_4_;
        }
        else {
          iVar3 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar3);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar3 = 0;
        }
        local_48 = CONCAT44(iVar3,(int)local_48);
      }
      lVar8 = (int64_t)(int)local_48;
      iVar3 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar3);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar3) break;
      local_60 = *(int64_t **)(local_50[2] + 8 + lVar8 * 8);
      FUN_01bc09c0();
      lVar8 = local_88;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_002ebc50;
        }
      }
      else if (local_88 != 0) {
LAB_002ebc50:
        local_80 = '\0';
        local_88 = 0;
        local_78 = lVar8;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_70._4_4_ = 0;
        while( true ) {
          if (local_70._4_4_ != 0) {
            if (local_70._4_4_ < 1) {
              iVar3 = -local_70._4_4_;
            }
            else {
              iVar3 = (int)local_70 - local_70._4_4_;
              local_70 = CONCAT44(local_70._4_4_,iVar3);
              FUN_00d23690();
              local_68 = local_68 + local_70._4_4_;
              iVar3 = 0;
            }
            local_70 = CONCAT44(iVar3,(int)local_70);
          }
          lVar8 = (int64_t)(int)local_70;
          iVar3 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar3);
          if (*(int *)(local_78 + 0xc) <= iVar3) break;
          local_88 = *(int64_t *)(*(int64_t *)(local_78 + 0x10) + 8 + lVar8 * 8);
          if (bVar5) {
            local_b0 = (double)FUN_01bc6390();
            dVar6 = (double)FUN_01bc6380();
            dVar7 = (double)FUN_01bc6390();
            dVar9 = local_b0 + dVar6;
            if (local_b0 + dVar6 <= local_a8) {
              dVar9 = local_a8;
            }
            param_2 = local_90;
            if (dVar7 < local_90) {
              local_b0 = dVar9;
              dVar6 = (double)FUN_01bc6390();
              param_2 = local_90;
              dVar9 = local_b0;
              local_90 = dVar6;
            }
          }
          else {
            local_90 = (double)FUN_01bc6390();
            dVar9 = (double)FUN_01bc6380();
            bVar5 = true;
            dVar9 = dVar9 + local_90;
          }
          local_a8 = dVar9;
        }
        FUN_000840d0();
        FUN_00d50b20();
      }
    }
    FUN_002e0650();
    FUN_00d50b20();
    plVar4 = local_38;
    if (!bVar5) goto LAB_002ebf0a;
  }
  else {
    local_90 = (double)(**(code **)(*plVar4 + 0xc0))();
    local_a8 = (double)(**(code **)(*plVar4 + 0xd0))();
  }
  *(void*)(this_ptr + 0x53) = 0;
  lVar8 = FUN_01bf1090();
  this_ptr[0x4f] = lVar8;
  this_ptr[0x50] = (int64_t)param_2;
  dVar9 = (local_a8 - local_90) + g_023b1e98;
  lVar8 = FUN_00e7b500(local_90 + g_023b1e90);
  this_ptr[0x51] = lVar8;
  this_ptr[0x52] = (int64_t)dVar9;
  FUN_00d46dc0(g_02390124);
  local_a0 = local_60;
  local_98 = 0;
  local_c0 = g_026fe3d0;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      local_c0 = g_026fe3d0;
    }
  }
  else {
    local_58 = '\0';
  }
  local_98 = '\x01';
  g_026fe3d0 = local_c0;
  if (local_c0 != 0) {
    local_98 = '\x01';
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  (**(code **)(*this_ptr + 0x408))(&local_c0,&local_a0);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_002ebf0a:
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
    FUN_00d50b20();
  }
  return;
}

