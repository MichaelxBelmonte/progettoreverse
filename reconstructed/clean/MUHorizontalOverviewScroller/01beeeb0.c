// Function: FUN_01beeeb0
// Address: 01beeeb0
// Size: 942 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01beeeb0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t in_R9;
  uint32_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  int64_t local_40;
  char local_38;
  
  iVar5 = FUN_01d3a5a0();
  if ((iVar5 == 1) && (iVar5 = FUN_01d3b630(), iVar5 == 1)) {
    FUN_01d3b590();
    cVar4 = FUN_01e420b0();
    if ((cVar4 == '\0') && ((int)this_ptr[0x3d] != 0)) {
      FUN_01e42250();
    }
    iVar5 = FUN_01d3b620();
    if (iVar5 == 2) {
      FUN_01bef350(0,0,1,in_R9,0,0);
    }
    else {
      uVar7 = FUN_01d3abf0();
      uVar9 = 0;
      uVar7 = FUN_00d05530(uVar7,0,g_023908d8);
LAB_01beefc0:
      do {
        do {
          do {
            (**(code **)(*this_ptr + 0x658))();
            lVar1 = *arg1;
            if (lVar1 == local_40) {
              if (((char)arg1[1] != '\0') || (local_40 == 0)) goto LAB_01bef082;
              lVar6 = lVar1;
              if (local_38 == '\0') {
                FUN_00d50b00();
                goto LAB_01bef07d;
              }
LAB_01bef025:
              *(void*)(arg1 + 1) = 1;
              if (lVar6 == 0) {
                return;
              }
              iVar5 = FUN_01d3a5a0();
            }
            else {
              lVar3 = arg1[1];
              if (local_38 != '\0') {
                *arg1 = local_40;
                lVar6 = local_40;
                if (((char)lVar3 != '\0') && (lVar1 != 0)) {
                  FUN_00d50b20();
                  lVar6 = *arg1;
                }
                goto LAB_01bef025;
              }
              if (local_40 != 0) {
                FUN_00d50b00();
              }
              *arg1 = local_40;
              if (((char)lVar3 != '\0') && (lVar1 != 0)) {
                FUN_00d50b20();
              }
LAB_01bef07d:
              *(void*)(arg1 + 1) = 1;
LAB_01bef082:
              lVar1 = *arg1;
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (lVar1 == 0) {
                return;
              }
              iVar5 = FUN_01d3a5a0();
            }
            if (iVar5 != 5) {
              FUN_01bef350(0,0,0);
              return;
            }
            iVar5 = FUN_01d3a5a0();
          } while (iVar5 != 5);
          uVar8 = FUN_01d3abf0();
          cVar4 = FUN_00d05410(uVar8,uVar7,uVar9);
        } while (cVar4 != '\0');
        uVar8 = FUN_01e466c0(uVar8);
        (**(code **)(*this_ptr + 0x658))();
        lVar1 = *arg1;
        if (lVar1 == local_40) {
          if (((char)arg1[1] == '\0') && (local_40 != 0)) {
            if (local_38 == '\0') {
              FUN_00d50b00();
              goto LAB_01bef1bc;
            }
            goto LAB_01bef154;
          }
LAB_01bef15d:
          lVar1 = *arg1;
        }
        else {
          lVar3 = arg1[1];
          if (local_38 != '\0') {
            *arg1 = local_40;
            if (((char)lVar3 != '\0') && (lVar1 != 0)) {
              FUN_00d50b20();
            }
LAB_01bef154:
            *(void*)(arg1 + 1) = 1;
            local_38 = '\0';
            goto LAB_01bef15d;
          }
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *arg1 = local_40;
          if (((char)lVar3 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
LAB_01bef1bc:
          *(void*)(arg1 + 1) = 1;
          lVar1 = *arg1;
        }
        if (lVar1 == 0) {
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01beefc0;
        }
        iVar5 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      } while (iVar5 != 5);
      plVar2 = (int64_t *)this_ptr[0x36];
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
        FUN_01e48f80(uVar8);
        (**(code **)(*plVar2 + 0x928))();
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01e459c0();
  }
  return;
}

