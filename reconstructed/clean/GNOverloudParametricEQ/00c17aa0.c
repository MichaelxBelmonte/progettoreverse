// Function: FUN_00c17aa0
// Address: 00c17aa0
// Size: 1061 bytes
// Class: GNOverloudParametricEQ

bool FUN_00c17aa0(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  char cVar8;
  int iVar9;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t local_58;
  char local_50;
  char local_41;
  int64_t local_40;
  char local_38;
  
  local_60 = param_3;
  (**(code **)(*this_ptr + 0x5d0))();
  lVar6 = local_40;
  lVar1 = *param_2;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_0276ca80;
  if (lVar1 != lVar6) goto LAB_00c17af0;
  if (g_0276ca80 != 0) {
    FUN_00d50b00();
  }
  cVar8 = FUN_00d90870();
  local_70 = param_1;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar4 = local_70;
  if (cVar8 != '\0') {
    FUN_00d8f140();
    lVar7 = local_40;
    plVar5 = local_60;
    lVar2 = *plVar4;
    if (lVar2 == local_40) {
      if (((char)plVar4[1] != '\0') || (local_40 == 0)) goto LAB_00c17c24;
      local_68 = local_70 + 1;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_00c17c1d;
      }
LAB_00c17c3e:
      *(void*)local_68 = 1;
    }
    else {
      local_68 = plVar4 + 1;
      cVar8 = (char)plVar4[1];
      if (local_38 != '\0') {
        *plVar4 = local_40;
        if ((cVar8 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00c17c3e;
      }
      local_41 = cVar8;
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *local_70 = lVar7;
      if ((local_41 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
LAB_00c17c1d:
      *(void*)local_68 = 1;
LAB_00c17c24:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x5d0))();
    local_40 = *local_70;
    local_38 = '\0';
    iVar9 = FUN_00d237a0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (iVar9 != -1) {
      (**(code **)(*this_ptr + 0x5d0))();
      FUN_00bf87d0();
      FUN_00d46dc0();
      lVar7 = local_40;
      lVar2 = *plVar5;
      if (lVar2 == local_40) {
        if (((char)plVar5[1] != '\0') || (local_40 == 0)) goto LAB_00c17d88;
        local_68 = plVar5 + 1;
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_00c17d7d;
        }
LAB_00c17d3d:
        *(void*)local_68 = 1;
        local_38 = '\0';
      }
      else {
        local_68 = plVar5 + 1;
        lVar3 = plVar5[1];
        if (local_38 != '\0') {
          *plVar5 = local_40;
          if (((char)lVar3 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_00c17d3d;
        }
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *local_60 = lVar7;
        if (((char)lVar3 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
LAB_00c17d7d:
        *(void*)local_68 = 1;
LAB_00c17d88:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*this_ptr + 0x5d0))();
  local_90 = *local_70;
  local_88 = '\0';
  (**(code **)(*this_ptr + 0x608))();
  local_80 = local_58;
  local_78 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_78 = '\x01';
  FUN_00b324d0(0,&local_90,&local_80);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_00c17af0:
  return lVar1 == lVar6;
}

