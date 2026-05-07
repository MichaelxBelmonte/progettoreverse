// Function: FUN_01db3c20
// Address: 01db3c20
// Size: 968 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01db3c20(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t lVar3;
  float fVar4;
  int64_t local_80;
  char local_78;
  float local_6c;
  float local_58;
  float local_44;
  int64_t local_40;
  char local_38;
  
  fVar4 = (float)((uint64_t)param_2 >> 0x20);
  local_58 = (float)param_2;
  FUN_01db3950();
  FUN_01db2340();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01db3fd4;
    FUN_00d50b00();
    iVar1 = *(int *)(local_40 + 0xc);
  }
  else {
    if (local_40 == 0) goto LAB_01db3fd4;
    iVar1 = *(int *)(local_40 + 0xc);
  }
  if (iVar1 == 0) goto LAB_01db3fd4;
  FUN_01e3f820();
  if (*(char *)(this_ptr + 0x138) == '\0') {
    local_58 = fVar4;
  }
  local_6c = (float)FUN_01db1e30();
  FUN_01db2340();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01db3d24;
    FUN_00d50b00();
LAB_01db3cf1:
    local_44 = 0.0;
    if (*(int *)(local_40 + 0xc) != 0) {
      local_44 = (float)(*(int *)(local_40 + 0xc) + -1) * g_023b36b0;
    }
    FUN_00d50b20();
  }
  else {
    if (local_40 != 0) goto LAB_01db3cf1;
LAB_01db3d24:
    local_44 = 0.0;
  }
  local_58 = (local_58 - local_6c) - local_44;
  if ((local_58 != 0.0) || (NAN(local_58))) {
    FUN_01db1f60();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      local_58 = (float)FUN_01db2dc0(local_58);
    }
    if ((local_58 != 0.0) || (NAN(local_58))) {
      FUN_01db24f0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        lVar3 = 0;
      }
      else {
        do {
          local_58 = (float)FUN_01db2dc0(local_58);
          if ((((local_58 != g_0239424c) || (NAN(local_58) || NAN(g_0239424c))) &&
              (FUN_01db24f0(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        } while (((local_58 != g_0239424c) || (NAN(local_58) || NAN(g_0239424c))) &&
                (local_40 != 0));
      }
    }
  }
  FUN_01db2b50();
  FUN_01db28c0();
  FUN_00d403d0();
  lVar2 = g_027f22b8;
  if (g_027f22b8 != 0) {
    FUN_00d50b00();
  }
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_80 = 0;
  local_78 = '\0';
  FUN_00d40470(&local_80,&stack0xffffffffffffff98,1,3);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_01db3fd4:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}

