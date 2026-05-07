// Function: FUN_00981130
// Address: 00981130
// Size: 847 bytes
// Class: Unknown


undefined8 * FUN_00981130(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *unaff_RSI;
  ulonglong uVar11;
  longlong *unaff_RDI;
  undefined4 uVar12;
  undefined8 *local_90;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  puVar3 = (undefined8 *)unaff_RDI[1];
  if (puVar3 < (undefined8 *)unaff_RDI[2]) {
    if (puVar3 == unaff_RSI) {
      *unaff_RSI = *param_2;
      lVar9 = param_2[1];
      unaff_RSI[1] = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      unaff_RDI[1] = (longlong)(unaff_RSI + 2);
    }
    else {
      FUN_009817fa(unaff_RSI + 2);
      if ((unaff_RSI <= param_2) && (param_2 < (undefined8 *)unaff_RDI[1])) {
        param_2 = param_2 + 2;
      }
      uVar4 = *param_2;
      lVar9 = param_2[1];
      if (lVar9 != 0) {
        LOCK();
        *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      *unaff_RSI = uVar4;
      plVar5 = (longlong *)unaff_RSI[1];
      unaff_RSI[1] = lVar9;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar9 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plVar5 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  else {
    if (((longlong)puVar3 - *unaff_RDI >> 4) + 1U >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar12 = FUN_0098197e(unaff_RDI + 2,(longlong)unaff_RSI - *unaff_RDI >> 4);
    if (local_48 == local_40) {
      if (local_50 < local_58 || (longlong)local_50 - (longlong)local_58 == 0) {
        uVar11 = 0;
        if ((longlong)local_40 - (longlong)local_58 != 0) {
          uVar11 = (longlong)local_40 - (longlong)local_58 >> 3;
        }
        FUN_0098197e(local_38,uVar11 >> 2);
        lVar9 = (longlong)local_48 - (longlong)local_50;
        local_48 = local_90;
        if (lVar9 != 0) {
          local_48 = (undefined8 *)((longlong)local_90 + lVar9);
          lVar10 = 8;
          do {
            *local_90 = *(undefined8 *)((longlong)local_50 + lVar10 + -8);
            local_90[1] = *(undefined8 *)((longlong)local_50 + lVar10);
            *(undefined8 *)((longlong)local_50 + lVar10) = 0;
            *(undefined8 *)((longlong)local_50 + lVar10 + -8) = 0;
            lVar2 = (lVar9 >> 4) * -0x10 + 0x10 + lVar10;
            lVar10 = lVar10 + 0x10;
            local_90 = local_90 + 2;
          } while (lVar2 != 8);
        }
        uVar12 = FUN_009819e2();
      }
      else {
        lVar9 = (longlong)local_50 - (longlong)local_58 >> 4;
        lVar9 = (lVar9 + 1) - (lVar9 + 1 >> 0x3f) >> 1;
        if (local_50 == local_48) {
          local_48 = local_50 + lVar9 * -2;
        }
        else {
          do {
            uVar12 = *(undefined4 *)local_50;
            uVar6 = *(undefined4 *)((longlong)local_50 + 4);
            uVar7 = *(undefined4 *)(local_50 + 1);
            uVar8 = *(undefined4 *)((longlong)local_50 + 0xc);
            local_50[1] = 0;
            *local_50 = 0;
            plVar5 = (longlong *)local_50[lVar9 * -2 + 1];
            puVar3 = local_50 + lVar9 * -2;
            *(undefined4 *)puVar3 = uVar12;
            *(undefined4 *)((longlong)puVar3 + 4) = uVar6;
            *(undefined4 *)(puVar3 + 1) = uVar7;
            *(undefined4 *)((longlong)puVar3 + 0xc) = uVar8;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar5 + 1;
              lVar10 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar10 == 0) {
                (**(code **)(*plVar5 + 0x10))();
                uVar12 = std::__shared_weak_count::__release_weak();
              }
            }
            local_50 = local_50 + 2;
          } while (local_48 != local_50);
          local_48 = local_50 + lVar9 * -2;
        }
      }
    }
    *local_48 = *param_2;
    lVar9 = param_2[1];
    local_48[1] = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    unaff_RSI = (undefined8 *)FUN_009818ca(uVar12,unaff_RSI);
    FUN_009819e2();
  }
  return unaff_RSI;
}


