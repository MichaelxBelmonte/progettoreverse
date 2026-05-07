// Function: FUN_01e00730
// Address: 01e00730
// Size: 1254 bytes
// Class: GNTabView
// === GNTabView properties ===
//   GNTabViewControlMode _controlMode


void FUN_01e00730(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t *this_ptr;
  uint32_t uVar8;
  uint32_t uVar9;
  int64_t local_38;
  char local_30;
  
  if ((int)this_ptr[0x2a] != 1) goto LAB_01e00aa1;
  FUN_01d3abf0();
  uVar8 = FUN_01e466c0();
  iVar5 = -1;
  if (0 < *(int *)(this_ptr[0x27] + 0xc)) {
    iVar7 = 0;
    uVar9 = param_2;
    do {
      param_2 = (**(code **)(*this_ptr + 0x918))();
      cVar3 = FUN_00d05410(uVar8,param_2,uVar9);
      if (cVar3 != '\0') {
        iVar4 = FUN_01d3a5a0();
        iVar5 = iVar7;
        goto joined_r0x01e007d8;
      }
      iVar7 = iVar7 + 1;
      uVar9 = param_2;
    } while (iVar7 < *(int *)(this_ptr[0x27] + 0xc));
  }
  iVar4 = FUN_01d3a5a0();
joined_r0x01e007d8:
  if ((iVar4 == 1) && (iVar7 = FUN_01d3b630(), iVar7 == 1)) {
    if (iVar5 != -1) {
      if ((*(char *)((int64_t)this_ptr + 0x15a) != '\0') && (1 < *(int *)(this_ptr[0x27] + 0xc)))
      {
        uVar9 = (**(code **)(*this_ptr + 0x920))();
        cVar3 = FUN_00d05410(uVar8,uVar9,param_2);
        if (cVar3 != '\0') {
          plVar1 = (int64_t *)this_ptr[0x29];
          if (plVar1 == (int64_t *)0x0) {
            return;
          }
          uVar8 = FUN_00d50b00();
          (**(code **)(*plVar1 + 0x30))(uVar8,iVar5);
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
            return;
          }
          return;
        }
      }
      FUN_01e00d40();
      return;
    }
  }
  else {
    iVar7 = FUN_01d3a5a0();
    if (iVar7 == 5) {
      if (iVar5 != -1) {
        *(int *)(this_ptr + 0x2d) = iVar5;
        cVar3 = FUN_01e45650();
        if (cVar3 == '\0') {
          (**(code **)(*this_ptr + 0x740))();
        }
      }
      if (*(char *)((int64_t)this_ptr + 0x15a) == '\0') {
        if (((*(char *)((int64_t)this_ptr + 0x159) != '\0') &&
            (1 < *(int *)(this_ptr[0x27] + 0xc))) && (iVar5 != -1)) {
          *(void*)((int64_t)this_ptr + 0x15a) = 1;
          (**(code **)(*this_ptr + 0x740))();
          if (*(char *)((int64_t)this_ptr + 0x15a) != '\0') goto LAB_01e008e0;
        }
        cVar3 = (**(code **)(*this_ptr + 0x750))();
        if (cVar3 != '\0') goto LAB_01e008e0;
      }
      else {
LAB_01e008e0:
        (**(code **)(*this_ptr + 0x620))();
      }
      if ((iVar5 == -1) && (cVar3 = FUN_01e45650(), cVar3 != '\0')) {
        FUN_01e42030();
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if (local_38 != 0) {
          FUN_01e42030();
          FUN_00d50b00();
          FUN_01d8fc00();
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  if ((int)this_ptr[0x2a] == 1) {
    iVar5 = FUN_01d3a5a0();
    if ((((iVar5 == 9) && (uVar6 = FUN_01d3b590(), (uVar6 & 0x100) != 0)) &&
        (cVar3 = (**(code **)(*this_ptr + 0x878))(), cVar3 != '\0')) &&
       (cVar3 = FUN_01e420b0(), cVar3 != '\0')) {
      iVar5 = FUN_01dfe5d0();
      if (iVar5 < 1) {
        if (this_ptr[0x27] != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      FUN_01e00d40();
      return;
    }
    if ((((int)this_ptr[0x2a] == 1) && (iVar5 = FUN_01d3a5a0(), iVar5 == 9)) &&
       ((uVar6 = FUN_01d3b590(), (uVar6 & 0x200) != 0 &&
        ((cVar3 = (**(code **)(*this_ptr + 0x878))(), cVar3 != '\0' &&
         (cVar3 = FUN_01e420b0(), cVar3 != '\0')))))) {
      FUN_01dfe5d0();
      if (this_ptr[0x27] != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      FUN_01e00d40();
      return;
    }
  }
LAB_01e00aa1:
  iVar5 = FUN_01d3a5a0();
  if (((iVar5 == 2) && (cVar3 = (**(code **)(*this_ptr + 0x878))(), cVar3 != '\0')) &&
     (cVar3 = FUN_01e420b0(), cVar3 != '\0')) {
    FUN_01d3b5d0();
    iVar5 = FUN_00d8d560();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (iVar5 != 0) {
      if (iVar5 < 0) {
        iVar5 = 1;
      }
      lVar2 = this_ptr[0x27];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      iVar7 = *(int *)(lVar2 + 0xc);
      FUN_00d50b20();
      if (iVar7 <= iVar5) {
        if (this_ptr[0x27] != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      FUN_01e00d40();
      return;
    }
  }
  FUN_01e459c0();
  return;
}

