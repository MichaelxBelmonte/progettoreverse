// Function: FUN_01b1c160
// Address: 01b1c160
// Size: 1302 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


uint64_t FUN_01b1c160(void* param_1,char param_2)

{
  int64_t lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int64_t lVar6;
  uint64_t uVar7;
  void*arg1;
  int64_t this_ptr;
  int64_t *plVar8;
  float fVar9;
  float fVar10;
  float local_64;
  int64_t *in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)(this_ptr + 0x316) != '\0') && (*(char *)(this_ptr + 0x315) != '\0')) {
    FUN_01ad3cb0();
    if (local_58 == '\0') {
      if (in_stack_ffffffffffffffa0 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_01b1c1c4;
      }
    }
    else if (in_stack_ffffffffffffffa0 != (int64_t *)0x0) {
LAB_01b1c1c4:
      FUN_01caeae0();
      if (local_58 == '\0') {
        if (in_stack_ffffffffffffffa0 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01b1c210;
        }
LAB_01b1c2c5:
        uVar7 = 0;
      }
      else {
        if (in_stack_ffffffffffffffa0 == (int64_t *)0x0) goto LAB_01b1c2c5;
LAB_01b1c210:
        if (param_2 == '\0') {
          iVar2 = FUN_01d654a0();
          if (((iVar2 == 0) || (iVar2 = FUN_01d654a0(), iVar2 == 1)) &&
             ((*(int *)(this_ptr + 400) == -1000000 || (*(int64_t *)(this_ptr + 0x1a0) == 0)))) {
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
              arg1 = (void*)(uint64_t)uVar3;
              if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != (int64_t *)0x0)) {
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
                arg1 = (void*)(uint64_t)uVar3;
                if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != (int64_t *)0x0)) {
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
            uVar7 = CONCAT71((int7)((uint64_t)arg1 >> 8),1);
            if (iVar2 == 2) goto LAB_01b1c63e;
          }
        }
        else {
          FUN_00d50b00();
          *(int *)(this_ptr + 0x2fc) = *(int *)(this_ptr + 0x2fc) + 1;
          fVar9 = *(float *)(this_ptr + 0x198);
          iVar2 = FUN_01d654a0();
          if (iVar2 == 0) {
            pvVar5 = _pthread_getspecific(param_1);
            plVar8 = in_stack_ffffffffffffffa0;
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar8 = (int64_t *)
                       in_stack_ffffffffffffffa0[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            local_64 = (float)(**(code **)(*plVar8 + 0x3a0))();
            pvVar5 = _pthread_getspecific(param_1);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              in_stack_ffffffffffffffa0 =
                   (int64_t *)
                   in_stack_ffffffffffffffa0[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            fVar9 = (float)(**(code **)(*in_stack_ffffffffffffffa0 + 0x3a0))();
LAB_01b1c477:
            fVar9 = (fVar9 - local_64) * g_0239011c;
LAB_01b1c487:
            arg1 = &g_02802558;
            FUN_01b05350(fVar9);
          }
          else {
            iVar2 = FUN_01d654a0();
            if (iVar2 == 1) {
              pvVar5 = _pthread_getspecific(param_1);
              plVar8 = in_stack_ffffffffffffffa0;
              if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                plVar8 = (int64_t *)
                         in_stack_ffffffffffffffa0[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              local_64 = (float)(**(code **)(*plVar8 + 0x3a0))();
              pvVar5 = _pthread_getspecific(param_1);
              if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                in_stack_ffffffffffffffa0 =
                     (int64_t *)
                     in_stack_ffffffffffffffa0[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
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
                     (int64_t *)
                     in_stack_ffffffffffffffa0[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              fVar10 = (float)(**(code **)(*in_stack_ffffffffffffffa0 + 0x3a0))();
              fVar9 = fVar9 - fVar10;
              goto LAB_01b1c487;
            }
          }
          FUN_01af6500();
          FUN_00d50b20();
          uVar7 = CONCAT71((int7)((uint64_t)arg1 >> 8),1);
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01b1c650;
    }
  }
  uVar7 = 0;
LAB_01b1c650:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return uVar7 & 0xffffffff;
  }
                      ___stack_chk_fail();
}

