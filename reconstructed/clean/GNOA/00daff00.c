// Function: FUN_00daff00
// Address: 00daff00
// Size: 578 bytes
// Class: GNOA

void*
FUN_00daff00(void*param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  void*this_ptr;
  bool bVar6;
  bool bVar7;
  uint8_t uVar8;
  int64_t local_a0;
  char local_98;
  int local_54 [5];
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*(int64_t *)*param_1 + 0x4d8))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00daff63;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_00daff63:
    uVar8 = 0;
    iVar4 = FUN_00daed40();
    lVar5 = g_02782eb0;
    if (iVar4 == -1) {
      if (g_02782eb0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    lVar5 = FUN_00e83010();
    local_54[0] = iVar4;
    (**(code **)(*plVar2 + 0x380))(local_54,lVar5,param_3,param_4,uVar8);
    bVar6 = local_40 != (int64_t *)0x0;
    bVar7 = iVar4 != local_54[0];
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027815a8;
    if (bVar6 || bVar7) {
      if (g_027815a8 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    *(void*)(lVar5 + iVar4) = 0;
    FUN_00d92e10();
    plVar3 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*plVar2 + 0x368))();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    if ((!bVar6) && (plVar3 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    return this_ptr;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

