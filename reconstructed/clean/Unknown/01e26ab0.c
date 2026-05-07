// Function: FUN_01e26ab0
// Address: 01e26ab0
// Size: 756 bytes
// Class: Unknown

void FUN_01e26ab0(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t lVar5;
  float fVar6;
  float fVar7;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  float local_54;
  int64_t local_40;
  char local_38;
  
  if (((this_ptr[0x27] != 0) && (iVar3 = FUN_01d3a5a0(), iVar3 == 1)) &&
     ((char)this_ptr[0x28] != '\0')) {
    FUN_01d3abf0();
    fVar6 = (float)FUN_01e466c0();
    fVar7 = (float)FUN_01e24a80();
    FUN_01e1f270();
    local_54 = (float)*(int *)(local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (fVar6 < fVar7 * local_54) {
      fVar7 = (float)FUN_01e24a80();
      FUN_01e1f2a0(fVar7,fVar6 / fVar7);
      FUN_01e20210();
      (**(code **)(*this_ptr + 0x620))();
      bVar1 = false;
      lVar4 = 0;
      do {
        (**(code **)(*this_ptr + 0x660))((int)g_023934c8,0);
        if (local_40 == lVar4) {
          if ((bVar1) || (local_40 == 0)) {
joined_r0x01e26c79:
            lVar5 = lVar4;
            bVar2 = bVar1;
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            lVar5 = lVar4;
            bVar2 = true;
            if (local_38 == '\0') {
              FUN_00d50b00();
              goto LAB_01e26c65;
            }
          }
        }
        else {
          lVar5 = local_40;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            bVar2 = true;
            if ((bVar1) && (lVar4 != 0)) {
              FUN_00d50b20();
              lVar4 = local_40;
LAB_01e26c65:
              bVar1 = true;
              goto joined_r0x01e26c79;
            }
          }
          else {
            bVar2 = true;
            if ((bVar1) && (lVar4 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        bVar1 = bVar2;
        if ((lVar5 == 0) || (iVar3 = FUN_01d3a5a0(), iVar3 == 5)) {
          FUN_00d50b00();
          local_78 = *arg1;
          local_70 = '\0';
          FUN_01e23740(0,&local_78);
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          (**(code **)(*this_ptr + 0x620))();
          goto LAB_01e26d8f;
        }
        iVar3 = FUN_01d3a5a0();
        lVar4 = lVar5;
        if (iVar3 == 6) {
          FUN_01e24a90();
LAB_01e26d8f:
          if (!bVar1) {
            return;
          }
          if (lVar5 == 0) {
            return;
          }
          FUN_00d50b20();
          return;
        }
      } while( true );
    }
  }
  local_68 = *arg1;
  local_60 = '\0';
  FUN_01e459c0();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return;
}

