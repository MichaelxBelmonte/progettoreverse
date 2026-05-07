// Function: FUN_01b1c160
// Address: 01b1c160
// Size: 1302 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01b1c202) */
/* WARNING: Removing unreachable block (ram,0x01b1c20b) */

ulonglong FUN_01b1c160(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float local_64;
  longlong *in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)(unaff_RDI + 0x316) != '\0') && (*(char *)(unaff_RDI + 0x315) != '\0')) {
    FUN_01ad3cb0();
    if (local_58 == '\0') {
      if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_01b1c1c4;
      }
    }
    else if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
LAB_01b1c1c4:
      FUN_01caeae0();
      if (local_58 == '\0') {
        if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_01b1c210;
        }
LAB_01b1c2c5:
        uVar7 = 0;
      }
      else {
        if (in_stack_ffffffffffffffa0 == (longlong *)0x0) goto LAB_01b1c2c5;
LAB_01b1c210:
        if (param_2 == '\0') {
          iVar2 = FUN_01d654a0();
          if (((iVar2 == 0) || (iVar2 = FUN_01d654a0(), iVar2 == 1)) &&
             ((*(int *)(unaff_RDI + 400) == -1000000 || (*(longlong *)(unaff_RDI + 0x1a0) == 0)))) {
LAB_01b1c63e:
            uVar7 = 0;
          }
          else {
            iVar2 = FUN_01d654a0();
            if (iVar2 == 1) {
              pvVar5 = _pthread_getspecific(param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0173b790();
              pvVar5 = _pthread_getspecific(param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar3 = FUN_01770870();
              unaff_RSI = (undefined8 *)(ulonglong)uVar3;
              if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((char)uVar3 != '\0') {
                pvVar5 = _pthread_getspecific(param_1);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0173b790();
                pvVar5 = _pthread_getspecific(param_1);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar3 = FUN_01770ea0();
                unaff_RSI = (undefined8 *)(ulonglong)uVar3;
                if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar5 = _pthread_getspecific(param_1);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar4 = FUN_0174a9c0();
                if (uVar3 == uVar4) goto LAB_01b1c63e;
              }
            }
            iVar2 = FUN_01d654a0();
            uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
            if (iVar2 == 2) goto LAB_01b1c63e;
          }
        }
        else {
          FUN_00d50b00();
          *(int *)(unaff_RDI + 0x2fc) = *(int *)(unaff_RDI + 0x2fc) + 1;
          fVar9 = *(float *)(unaff_RDI + 0x198);
          iVar2 = FUN_01d654a0();
          if (iVar2 == 0) {
            pvVar5 = _pthread_getspecific(param_1);
            plVar8 = in_stack_ffffffffffffffa0;
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar8 = (longlong *)
                       in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            local_64 = (float)(**(code **)(*plVar8 + 0x3a0))();
            pvVar5 = _pthread_getspecific(param_1);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              in_stack_ffffffffffffffa0 =
                   (longlong *)
                   in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            fVar9 = (float)(**(code **)(*in_stack_ffffffffffffffa0 + 0x3a0))();
LAB_01b1c477:
            fVar9 = (fVar9 - local_64) * DAT_0239011c;
LAB_01b1c487:
            unaff_RSI = &DAT_02802558;
            FUN_01b05350(fVar9);
          }
          else {
            iVar2 = FUN_01d654a0();
            if (iVar2 == 1) {
              pvVar5 = _pthread_getspecific(param_1);
              plVar8 = in_stack_ffffffffffffffa0;
              if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                plVar8 = (longlong *)
                         in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              local_64 = (float)(**(code **)(*plVar8 + 0x3a0))();
              pvVar5 = _pthread_getspecific(param_1);
              if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                in_stack_ffffffffffffffa0 =
                     (longlong *)
                     in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              fVar9 = (float)(**(code **)(*in_stack_ffffffffffffffa0 + 0x3a0))();
              goto LAB_01b1c477;
            }
            iVar2 = FUN_01d654a0();
            if (iVar2 == 2) {
              pvVar5 = _pthread_getspecific(param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017423e0(fVar9);
              pvVar5 = _pthread_getspecific(param_1);
              if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                in_stack_ffffffffffffffa0 =
                     (longlong *)
                     in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              fVar10 = (float)(**(code **)(*in_stack_ffffffffffffffa0 + 0x3a0))();
              fVar9 = fVar9 - fVar10;
              goto LAB_01b1c487;
            }
          }
          FUN_01af6500();
          FUN_00d50b20();
          uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01b1c650;
    }
  }
  uVar7 = 0;
LAB_01b1c650:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


