// ===================================================================
// MUTempoEditorView — Complete reconstructed pseudocode
// 18 functions
// ===================================================================

// Registered properties (3):
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


// ============================================================
// 01c46d90
// ============================================================
// Function: FUN_01c46d90
// Address: 01c46d90
// Size: 11726 bytes
// Class: MUTempoEditorView
// String references:
//   "MUTempoEditorView"
//   "handleSmoothenTempoAnchors"
//   "handleSmoothenTempoAnchorsWide"
//   "handleSmoothenTempoAnchorsLocal"
//   "handleSetBar1ToStartOfFile"
//   "handleMakeConstantTempo"
//   "handleInterpolateTempoForAnchors"
//   "handleCopy"
//   "handleSelectAll"
//   "handleDelete"
//   "handleFinishEditing"
//   "handleAdvancedTempoDetection"
//   "handlePaste"
//   "handleCut"
//   "handleMoveLeft"
//   "handleMoveRight"
//   "handleMoveUp"
//   "handleMoveDown"
//   "handleMoveLeftFine"
//   "handleMoveRightFine"
//   ... +13 more
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_01c46d90(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b66f8 = "handleSelectAll";
      g_028b6700 = &g_0273cec0;
      g_028b6708 = 0;
      g_028b6710 = &g_027ebf20;
      g_028b6718 = FUN_01c79e60;
      g_028b6720 = 0x9b9;
      g_028b6728 = 0;
      ram_00000000028b6730 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6740 = "handleDelete";
      g_028b6748 = &g_0273cec0;
      g_028b6750 = 0;
      g_028b6758 = &g_027ebf20;
      g_028b6760 = FUN_01c79e60;
      g_028b6768 = 0x9c1;
      g_028b6770 = 0;
      ram_00000000028b6778 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6788 = "handleCut";
      g_028b6790 = &g_0273cec0;
      g_028b6798 = 0;
      g_028b67a0 = &g_027ebf20;
      g_028b67a8 = FUN_01c79e60;
      g_028b67b0 = 0x9c9;
      g_028b67b8 = 0;
      ram_00000000028b67c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b67d0 = "handleCopy";
      g_028b67d8 = &g_0273cec0;
      g_028b67e0 = 0;
      g_028b67e8 = &g_027ebf20;
      g_028b67f0 = FUN_01c79e60;
      g_028b67f8 = 0x9d1;
      g_028b6800 = 0;
      ram_00000000028b6808 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6818 = "handlePaste";
      g_028b6820 = &g_0273cec0;
      g_028b6828 = 0;
      g_028b6830 = &g_027ebf20;
      g_028b6838 = FUN_01c79e60;
      g_028b6840 = 0x9d9;
      g_028b6848 = 0;
      ram_00000000028b6850 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6860 = "setDestinationRegionStartAlpha";
      g_028b6868 = &g_0273cec0;
      g_028b6870 = 0;
      g_028b6878 = &g_027ebf24;
      g_028b6880 = FUN_01c79ef0;
      g_028b6888 = FUN_01c49bc0;
      g_028b6890 = 0;
      ram_00000000028b6898 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b68a8 = "handleTempoRegionsToSubdivisionTempo";
      g_028b68b0 = &g_0273cec0;
      g_028b68b8 = 0;
      g_028b68c0 = &g_027ebf20;
      g_028b68c8 = FUN_01c79e60;
      g_028b68d0 = 0x9a9;
      g_028b68d8 = 0;
      ram_00000000028b68e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b68f0 = "handleSetCurrentSubdivision";
      g_028b68f8 = &g_0273cec0;
      g_028b6900 = 0;
      g_028b6908 = &g_027ebf20;
      g_028b6910 = FUN_01c79e60;
      g_028b6918 = 0x9b1;
      g_028b6920 = 0;
      ram_00000000028b6928 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6938 = "handleSmoothenTempoAnchors";
      g_028b6940 = &g_0273cec0;
      g_028b6948 = 0;
      g_028b6950 = &g_027ebf20;
      g_028b6958 = FUN_01c79e60;
      g_028b6960 = 0x931;
      g_028b6968 = 0;
      ram_00000000028b6970 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6980 = "handleSmoothenTempoAnchorsWide";
      g_028b6988 = &g_0273cec0;
      g_028b6990 = 0;
      g_028b6998 = &g_027ebf20;
      g_028b69a0 = FUN_01c79e60;
      g_028b69a8 = 0x939;
      g_028b69b0 = 0;
      ram_00000000028b69b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b69c8 = "handleSmoothenTempoAnchorsLocal";
      g_028b69d0 = &g_0273cec0;
      g_028b69d8 = 0;
      g_028b69e0 = &g_027ebf20;
      g_028b69e8 = FUN_01c79e60;
      g_028b69f0 = 0x941;
      g_028b69f8 = 0;
      ram_00000000028b6a00 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6a10 = "handleSetBar1ToStartOfFile";
      g_028b6a18 = &g_0273cec0;
      g_028b6a20 = 0;
      g_028b6a28 = &g_027ebf20;
      g_028b6a30 = FUN_01c79e60;
      g_028b6a38 = 0x949;
      g_028b6a40 = 0;
      ram_00000000028b6a48 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6a58 = "handleMakeConstantTempo";
      g_028b6a60 = &g_0273cec0;
      g_028b6a68 = 0;
      g_028b6a70 = &g_027ebf20;
      g_028b6a78 = FUN_01c79e60;
      g_028b6a80 = 0x951;
      g_028b6a88 = 0;
      ram_00000000028b6a90 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6aa0 = "handleInterpolateTempoForAnchors";
      g_028b6aa8 = &g_0273cec0;
      g_028b6ab0 = 0;
      g_028b6ab8 = &g_027ebf20;
      g_028b6ac0 = FUN_01c79e60;
      g_028b6ac8 = 0x959;
      g_028b6ad0 = 0;
      ram_00000000028b6ad8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6ae8 = "handleFinishEditing";
      g_028b6af0 = &g_0273cec0;
      g_028b6af8 = 0;
      g_028b6b00 = &g_027ebf20;
      g_028b6b08 = FUN_01c79e60;
      g_028b6b10 = 0x961;
      g_028b6b18 = 0;
      ram_00000000028b6b20 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6b30 = "handleMakeTempoUndefined";
      g_028b6b38 = &g_0273cec0;
      g_028b6b40 = 0;
      g_028b6b48 = &g_027ebf20;
      g_028b6b50 = FUN_01c79e60;
      g_028b6b58 = 0x969;
      g_028b6b60 = 0;
      ram_00000000028b6b68 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6b78 = "handleMakeTempoUndefinedToEnd";
      g_028b6b80 = &g_0273cec0;
      g_028b6b88 = 0;
      g_028b6b90 = &g_027ebf20;
      g_028b6b98 = FUN_01c79e60;
      g_028b6ba0 = 0x971;
      g_028b6ba8 = 0;
      ram_00000000028b6bb0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6bc0 = "handleMakeTempoUndefinedToStart";
      g_028b6bc8 = &g_0273cec0;
      g_028b6bd0 = 0;
      g_028b6bd8 = &g_027ebf20;
      g_028b6be0 = FUN_01c79e60;
      g_028b6be8 = 0x979;
      g_028b6bf0 = 0;
      ram_00000000028b6bf8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6c08 = "handleMakeTempoDefined";
      g_028b6c10 = &g_0273cec0;
      g_028b6c18 = 0;
      g_028b6c20 = &g_027ebf20;
      g_028b6c28 = FUN_01c79e60;
      g_028b6c30 = 0x981;
      g_028b6c38 = 0;
      ram_00000000028b6c40 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6c50 = "handleSelectToEnd";
      g_028b6c58 = &g_0273cec0;
      g_028b6c60 = 0;
      g_028b6c68 = &g_027ebf20;
      g_028b6c70 = FUN_01c79e60;
      g_028b6c78 = 0x989;
      g_028b6c80 = 0;
      ram_00000000028b6c88 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6c98 = "handleRemoveConstantTempoAnchors";
      g_028b6ca0 = &g_0273cec0;
      g_028b6ca8 = 0;
      g_028b6cb0 = &g_027ebf20;
      g_028b6cb8 = FUN_01c79e60;
      g_028b6cc0 = 0x991;
      g_028b6cc8 = 0;
      ram_00000000028b6cd0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6ce0 = "handleFillInTempoAnchors";
      g_028b6ce8 = &g_0273cec0;
      g_028b6cf0 = 0;
      g_028b6cf8 = &g_027ebf20;
      g_028b6d00 = FUN_01c79e60;
      g_028b6d08 = 0x999;
      g_028b6d10 = 0;
      ram_00000000028b6d18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6d28 = "handleMoveUp";
      g_028b6d30 = &g_0273cec0;
      g_028b6d38 = 0;
      g_028b6d40 = &g_027ebf20;
      g_028b6d48 = FUN_01c79e60;
      g_028b6d50 = 0x9e1;
      g_028b6d58 = 0;
      ram_00000000028b6d60 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6d70 = "handleMoveDown";
      g_028b6d78 = &g_0273cec0;
      g_028b6d80 = 0;
      g_028b6d88 = &g_027ebf20;
      g_028b6d90 = FUN_01c79e60;
      g_028b6d98 = 0x9e9;
      g_028b6da0 = 0;
      ram_00000000028b6da8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6db8 = "handleMoveLeft";
      g_028b6dc0 = &g_0273cec0;
      g_028b6dc8 = 0;
      g_028b6dd0 = &g_027ebf20;
      g_028b6dd8 = FUN_01c79e60;
      g_028b6de0 = 0x9f1;
      g_028b6de8 = 0;
      ram_00000000028b6df0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6e00 = "handleMoveRight";
      g_028b6e08 = &g_0273cec0;
      g_028b6e10 = 0;
      g_028b6e18 = &g_027ebf20;
      g_028b6e20 = FUN_01c79e60;
      g_028b6e28 = 0x9f9;
      g_028b6e30 = 0;
      ram_00000000028b6e38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6e48 = "handleMoveLeftFine";
      g_028b6e50 = &g_0273cec0;
      g_028b6e58 = 0;
      g_028b6e60 = &g_027ebf20;
      g_028b6e68 = FUN_01c79e60;
      g_028b6e70 = 0xa11;
      g_028b6e78 = 0;
      ram_00000000028b6e80 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6e90 = "handleMoveRightFine";
      g_028b6e98 = &g_0273cec0;
      g_028b6ea0 = 0;
      g_028b6ea8 = &g_027ebf20;
      g_028b6eb0 = FUN_01c79e60;
      g_028b6eb8 = 0xa19;
      g_028b6ec0 = 0;
      ram_00000000028b6ec8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6ed8 = "handleMoveUpFine";
      g_028b6ee0 = &g_0273cec0;
      g_028b6ee8 = 0;
      g_028b6ef0 = &g_027ebf20;
      g_028b6ef8 = FUN_01c79e60;
      g_028b6f00 = 0xa01;
      g_028b6f08 = 0;
      ram_00000000028b6f10 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6f20 = "handleMoveDownFine";
      g_028b6f28 = &g_0273cec0;
      g_028b6f30 = 0;
      g_028b6f38 = &g_027ebf20;
      g_028b6f40 = FUN_01c79e60;
      g_028b6f48 = 0xa09;
      g_028b6f50 = 0;
      ram_00000000028b6f58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6f68 = "handlePopUpSelChanged";
      g_028b6f70 = &g_0273cec0;
      g_028b6f78 = 0;
      g_028b6f80 = &g_027ebf20;
      g_028b6f88 = FUN_01c79e60;
      g_028b6f90 = 0xa21;
      g_028b6f98 = 0;
      ram_00000000028b6fa0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b6fb0 = "handleAdvancedTempoDetection";
      g_028b6fb8 = &g_0273cec0;
      g_028b6fc0 = 0;
      g_028b6fc8 = &g_027ebf20;
      g_028b6fd0 = FUN_01c79e60;
      g_028b6fd8 = 0x9a1;
      g_028b6fe0 = 0;
      ram_00000000028b6fe8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 0010ae60
// ============================================================
// Function: FUN_0010ae60
// Address: 0010ae60
// Size: 2199 bytes
// Class: MUTempoEditorView
// String references:
//   "MUTempoEditorView"
//   "MUSignatureEditorView"
//   "MUQuarterSequenceView"
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_0010ae60(void)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t **pplVar8;
  int iVar9;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar10;
  int64_t *local_70;
  int64_t local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  uint32_t local_38;
  uint32_t local_34;
  
  if (*arg1 != 0) {
    if (*(char *)(this_ptr + 0xc) == '\0') {
      local_68 = *(int64_t *)(this_ptr + 0x40);
      if (local_68 == 0) {
        bVar3 = false;
        plVar10 = (int64_t *)0x0;
        local_34 = 0;
        local_68 = 0;
      }
      else {
        uVar6 = FUN_00d50b00();
        local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        bVar3 = false;
        plVar10 = (int64_t *)0x0;
      }
    }
    else {
      local_68 = *(int64_t *)(this_ptr + 0x18);
      if (local_68 == 0) {
        local_34 = 0;
      }
      else {
        uVar6 = FUN_00d50b00();
        local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      }
      FUN_01a8c310();
      plVar10 = local_60;
      if (local_60 == (int64_t *)0x0) {
        plVar10 = (int64_t *)0x0;
        bVar3 = false;
      }
      else {
        bVar3 = true;
        if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    bVar4 = true;
    do {
      bVar2 = bVar4;
      if (bVar2) {
        FUN_01d99db0();
        local_70 = local_60;
        if (local_60 == (int64_t *)0x0) {
          local_38 = 0;
        }
        else {
          local_38 = (int)CONCAT71((int7)((uint64_t)local_60 >> 8),1);
          if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_0010b020:
        if (local_70 != (int64_t *)0x0) {
          local_58 = '\0';
          local_60 = (int64_t *)0x0;
          local_50 = local_70;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_48._4_4_ = 0;
          while( true ) {
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar9 = -local_48._4_4_;
              }
              else {
                iVar9 = (int)local_48 - local_48._4_4_;
                local_48 = CONCAT44(local_48._4_4_,iVar9);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar9 = 0;
              }
              local_48 = CONCAT44(iVar9,(int)local_48);
            }
            lVar7 = (int64_t)(int)local_48;
            iVar9 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar9);
            if (*(int *)((int64_t)local_50 + 0xc) <= iVar9) break;
            plVar1 = *(int64_t **)(local_50[2] + 8 + lVar7 * 8);
            local_60 = plVar1;
            if ((g_027ebf10 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
              g_0273ced8 = FUN_0006d940();
              g_0273cec0 = "MUTempoEditorView";
              g_0273cec8 = 0x2e8;
              g_0273ced0 = FUN_0010c150;
              g_0273cee0 = 0;
              ram_000000000273cee8 = 0;
              g_0273cef0 = 0;
              g_0273cf68 = 0;
              ram_000000000273cf70 = 0;
              g_0273cf78 = 0;
              g_0273cf7a = 1;
              g_0273cef8 = 0;
              ram_000000000273cf00 = 0;
              g_0273cf08 = 0;
              ram_000000000273cf10 = 0;
              g_0273cf18 = 0;
              ram_000000000273cf20 = 0;
              g_0273cf28 = 0;
              ram_000000000273cf30 = 0;
              g_0273cf38 = 0;
              ram_000000000273cf40 = 0;
              g_0273cf48 = 0;
              ram_000000000273cf50 = 0;
              g_0273cf58 = 0;
              ram_000000000273cf60 = 0;
              g_0273cf83 = 0;
              g_0273cf7b = 0;
              ___cxa_guard_release();
            }
            pplVar8 = (int64_t **)&g_02802688;
            if (plVar1 != (int64_t *)0x0) {
              (**(code **)(*plVar1 + 0x360))();
              cVar5 = FUN_00e85ea0();
              pplVar8 = &local_60;
              if (cVar5 == '\0') {
                pplVar8 = (int64_t **)&g_02802688;
              }
            }
            plVar1 = local_60;
            if (*pplVar8 == (int64_t *)0x0) {
              if ((g_026e11d8 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                g_0273c748 = FUN_0006d940();
                g_0273c730 = "MUSignatureEditorView";
                g_0273c738 = 0x1b0;
                g_0273c740 = FUN_0010c5e0;
                g_0273c750 = 0;
                ram_000000000273c758 = 0;
                g_0273c760 = 0;
                g_0273c7d8 = 0;
                ram_000000000273c7e0 = 0;
                g_0273c7e8 = 0;
                g_0273c7ea = 1;
                g_0273c768 = 0;
                ram_000000000273c770 = 0;
                g_0273c778 = 0;
                ram_000000000273c780 = 0;
                g_0273c788 = 0;
                ram_000000000273c790 = 0;
                g_0273c798 = 0;
                ram_000000000273c7a0 = 0;
                g_0273c7a8 = 0;
                ram_000000000273c7b0 = 0;
                g_0273c7b8 = 0;
                ram_000000000273c7c0 = 0;
                g_0273c7c8 = 0;
                ram_000000000273c7d0 = 0;
                g_0273c7f3 = 0;
                g_0273c7eb = 0;
                ___cxa_guard_release();
              }
              pplVar8 = (int64_t **)&g_02802688;
              if (plVar1 != (int64_t *)0x0) {
                (**(code **)(*plVar1 + 0x360))();
                cVar5 = FUN_00e85ea0();
                pplVar8 = &local_60;
                if (cVar5 == '\0') {
                  pplVar8 = (int64_t **)&g_02802688;
                }
              }
              plVar1 = local_60;
              if (*pplVar8 == (int64_t *)0x0) {
                if ((g_026e11d8 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                  g_0273c748 = FUN_0006d940();
                  g_0273c730 = "MUSignatureEditorView";
                  g_0273c738 = 0x1b0;
                  g_0273c740 = FUN_0010c5e0;
                  g_0273c750 = 0;
                  ram_000000000273c758 = 0;
                  g_0273c760 = 0;
                  g_0273c7d8 = 0;
                  ram_000000000273c7e0 = 0;
                  g_0273c7e8 = 0;
                  g_0273c7ea = 1;
                  g_0273c768 = 0;
                  ram_000000000273c770 = 0;
                  g_0273c778 = 0;
                  ram_000000000273c780 = 0;
                  g_0273c788 = 0;
                  ram_000000000273c790 = 0;
                  g_0273c798 = 0;
                  ram_000000000273c7a0 = 0;
                  g_0273c7a8 = 0;
                  ram_000000000273c7b0 = 0;
                  g_0273c7b8 = 0;
                  ram_000000000273c7c0 = 0;
                  g_0273c7c8 = 0;
                  ram_000000000273c7d0 = 0;
                  g_0273c7f3 = 0;
                  g_0273c7eb = 0;
                  ___cxa_guard_release();
                }
                pplVar8 = (int64_t **)&g_02802688;
                if (plVar1 != (int64_t *)0x0) {
                  (**(code **)(*plVar1 + 0x360))();
                  cVar5 = FUN_00e85ea0();
                  pplVar8 = &local_60;
                  if (cVar5 == '\0') {
                    pplVar8 = (int64_t **)&g_02802688;
                  }
                }
                plVar1 = local_60;
                if (*pplVar8 == (int64_t *)0x0) {
                  if ((g_027e2750 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                    g_026f75c8 = FUN_0006d940();
                    g_026f75b0 = "MUQuarterSequenceView";
                    g_026f75b8 = 0x1f8;
                    g_026f75c0 = FUN_0010c6a0;
                    g_026f75d0 = 0;
                    ram_00000000026f75d8 = 0;
                    g_026f75e0 = 0;
                    ram_00000000026f75e8 = 0;
                    g_026f75f0 = 0;
                    ram_00000000026f75f8 = 0;
                    g_026f7600 = 0;
                    ram_00000000026f7608 = 0;
                    g_026f7610 = 0;
                    ram_00000000026f7618 = 0;
                    g_026f7620 = 0;
                    ram_00000000026f7628 = 0;
                    g_026f7630 = 0;
                    ram_00000000026f7638 = 0;
                    g_026f7640 = 0;
                    ram_00000000026f7648 = 0;
                    g_026f7650 = 0;
                    ram_00000000026f7658 = 0;
                    g_026f7660 = 0;
                    ram_00000000026f7668 = 0;
                    g_026f7670 = 0;
                    ___cxa_guard_release();
                  }
                  pplVar8 = (int64_t **)&g_02802688;
                  if (plVar1 != (int64_t *)0x0) {
                    (**(code **)(*plVar1 + 0x360))();
                    cVar5 = FUN_00e85ea0();
                    pplVar8 = &local_60;
                    if (cVar5 == '\0') {
                      pplVar8 = (int64_t **)&g_02802688;
                    }
                  }
                  plVar1 = local_60;
                  if (*pplVar8 != (int64_t *)0x0) {
                    lVar7 = *(int64_t *)(this_ptr + 0x20);
                    if (lVar7 != 0) {
                      FUN_00d50b00();
                    }
                    (**(code **)(*plVar1 + 0x960))();
                    if (lVar7 != 0) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  FUN_01c87b20();
                  if (plVar10 != (int64_t *)0x0) {
                    FUN_01c878e0();
                  }
                }
              }
              else {
                FUN_01c87b20();
                if (plVar10 != (int64_t *)0x0) {
                  FUN_01c878e0();
                }
              }
            }
            else {
              FUN_01c51ca0();
            }
          }
          FUN_000a9680();
          if ((char)local_38 != '\0') {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_01d99a50();
        local_70 = local_60;
        if (local_60 != (int64_t *)0x0) {
          local_38 = (int)CONCAT71((int7)((uint64_t)local_60 >> 8),1);
          if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0010b020;
        }
        local_38 = 0;
      }
      bVar4 = false;
    } while (bVar2);
    if ((bVar3) && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_34 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 0071fc50
// ============================================================
// Function: FUN_0071fc50
// Address: 0071fc50
// Size: 2359 bytes
// Class: MUTempoEditorView
// String references:
//   "MUTempoEditorView"
//   "MUSignatureEditorView"
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_0071fc50(int param_1,int64_t *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  int64_t *plVar7;
  int iVar8;
  int64_t *arg1;
  int64_t *plVar9;
  int iVar10;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int local_94;
  int local_74;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  int local_3c;
  
  if (param_1 == 0) {
    FUN_01d99db0();
    plVar9 = local_70;
    if (local_70 == (int64_t *)0x0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (((local_68 == '\0') && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d99db0();
    local_3c = *(int *)((int64_t)local_70 + 0xc);
    if (local_68 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d99a50();
    plVar9 = local_70;
    if (local_70 == (int64_t *)0x0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (((local_68 == '\0') && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d99a50();
    local_3c = *(int *)((int64_t)local_70 + 0xc);
    if (local_68 != '\0') {
      FUN_00d50b20();
    }
  }
  local_94 = param_1;
  if (plVar9 == (int64_t *)0x0) {
    iVar10 = -1;
    local_74 = -1;
    iVar3 = -1;
    iVar4 = -1;
    plVar7 = (int64_t *)*arg1;
  }
  else {
    local_68 = '\0';
    local_70 = (int64_t *)0x0;
    local_60 = plVar9;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar10 = -1;
    local_58._4_4_ = 0;
    local_74 = -1;
    iVar3 = -1;
    iVar4 = -1;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar8 = -local_58._4_4_;
        }
        else {
          iVar8 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar8);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar8 = 0;
        }
        local_58 = CONCAT44(iVar8,(int)local_58);
      }
      lVar5 = (int64_t)(int)local_58;
      iVar8 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar8);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar8) break;
      plVar7 = *(int64_t **)(local_60[2] + 8 + lVar5 * 8);
      local_70 = plVar7;
      if ((g_026e11d8 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
        g_0273c748 = FUN_0006d940();
        g_0273c730 = "MUSignatureEditorView";
        g_0273c738 = 0x1b0;
        g_0273c740 = FUN_0010c5e0;
        g_0273c750 = 0;
        ram_000000000273c758 = 0;
        g_0273c760 = 0;
        g_0273c7d8 = 0;
        ram_000000000273c7e0 = 0;
        g_0273c7e8 = 0;
        g_0273c7ea = 1;
        g_0273c768 = 0;
        ram_000000000273c770 = 0;
        g_0273c778 = 0;
        ram_000000000273c780 = 0;
        g_0273c788 = 0;
        ram_000000000273c790 = 0;
        g_0273c798 = 0;
        ram_000000000273c7a0 = 0;
        g_0273c7a8 = 0;
        ram_000000000273c7b0 = 0;
        g_0273c7b8 = 0;
        ram_000000000273c7c0 = 0;
        g_0273c7c8 = 0;
        ram_000000000273c7d0 = 0;
        g_0273c7f3 = 0;
        g_0273c7eb = 0;
        ___cxa_guard_release();
      }
      pplVar6 = (int64_t **)&g_02802688;
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar6 = &local_70;
        if (cVar2 == '\0') {
          pplVar6 = (int64_t **)&g_02802688;
        }
      }
      plVar7 = local_70;
      if (*pplVar6 == (int64_t *)0x0) {
        if ((g_027ebf10 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          g_0273ced8 = FUN_0006d940();
          g_0273cec0 = "MUTempoEditorView";
          g_0273cec8 = 0x2e8;
          g_0273ced0 = FUN_0010c150;
          g_0273cee0 = 0;
          ram_000000000273cee8 = 0;
          g_0273cef0 = 0;
          g_0273cf68 = 0;
          ram_000000000273cf70 = 0;
          g_0273cf78 = 0;
          g_0273cf7a = 1;
          g_0273cef8 = 0;
          ram_000000000273cf00 = 0;
          g_0273cf08 = 0;
          ram_000000000273cf10 = 0;
          g_0273cf18 = 0;
          ram_000000000273cf20 = 0;
          g_0273cf28 = 0;
          ram_000000000273cf30 = 0;
          g_0273cf38 = 0;
          ram_000000000273cf40 = 0;
          g_0273cf48 = 0;
          ram_000000000273cf50 = 0;
          g_0273cf58 = 0;
          ram_000000000273cf60 = 0;
          g_0273cf83 = 0;
          g_0273cf7b = 0;
          ___cxa_guard_release();
        }
        pplVar6 = (int64_t **)&g_02802688;
        if (plVar7 != (int64_t *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar6 = &local_70;
          if (cVar2 == '\0') {
            pplVar6 = (int64_t **)&g_02802688;
          }
        }
        plVar7 = local_70;
        if (*pplVar6 == (int64_t *)0x0) {
          FUN_0026cb20();
          pplVar6 = (int64_t **)&g_02802688;
          if (plVar7 != (int64_t *)0x0) {
            (**(code **)(*plVar7 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar6 = &local_70;
            if (cVar2 == '\0') {
              pplVar6 = (int64_t **)&g_02802688;
            }
          }
          plVar7 = local_70;
          if (*pplVar6 == (int64_t *)0x0) {
            FUN_00271e80();
            pplVar6 = (int64_t **)&g_02802688;
            if (plVar7 != (int64_t *)0x0) {
              (**(code **)(*plVar7 + 0x360))();
              cVar2 = FUN_00e85ea0();
              pplVar6 = &local_70;
              if (cVar2 == '\0') {
                pplVar6 = (int64_t **)&g_02802688;
              }
            }
            if (*pplVar6 != (int64_t *)0x0) {
              iVar4 = local_50 + (int)local_58;
            }
          }
          else {
            local_74 = local_50 + (int)local_58;
          }
        }
        else {
          iVar3 = local_50 + (int)local_58;
        }
      }
      else {
        iVar10 = local_50 + (int)local_58;
      }
    }
    FUN_000a9680();
    plVar7 = (int64_t *)*arg1;
  }
  if ((g_026e11d8 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_0273c748 = FUN_0006d940();
    g_0273c730 = "MUSignatureEditorView";
    g_0273c738 = 0x1b0;
    g_0273c740 = FUN_0010c5e0;
    g_0273c750 = 0;
    ram_000000000273c758 = 0;
    g_0273c760 = 0;
    g_0273c7d8 = 0;
    ram_000000000273c7e0 = 0;
    g_0273c7e8 = 0;
    g_0273c7ea = 1;
    g_0273c768 = 0;
    ram_000000000273c770 = 0;
    g_0273c778 = 0;
    ram_000000000273c780 = 0;
    g_0273c788 = 0;
    ram_000000000273c790 = 0;
    g_0273c798 = 0;
    ram_000000000273c7a0 = 0;
    g_0273c7a8 = 0;
    ram_000000000273c7b0 = 0;
    g_0273c7b8 = 0;
    ram_000000000273c7c0 = 0;
    g_0273c7c8 = 0;
    ram_000000000273c7d0 = 0;
    g_0273c7f3 = 0;
    g_0273c7eb = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_00720176:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar7 = arg1;
    if (cVar2 == '\0') goto LAB_00720176;
  }
  if (*plVar7 != 0) {
    local_3c = 0;
    if (-1 < iVar3) {
      local_3c = iVar3;
    }
    goto LAB_007202d7;
  }
  plVar7 = (int64_t *)*arg1;
  if ((g_027ebf10 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_0273ced8 = FUN_0006d940();
    g_0273cec0 = "MUTempoEditorView";
    g_0273cec8 = 0x2e8;
    g_0273ced0 = FUN_0010c150;
    g_0273cee0 = 0;
    ram_000000000273cee8 = 0;
    g_0273cef0 = 0;
    g_0273cf68 = 0;
    ram_000000000273cf70 = 0;
    g_0273cf78 = 0;
    g_0273cf7a = 1;
    g_0273cef8 = 0;
    ram_000000000273cf00 = 0;
    g_0273cf08 = 0;
    ram_000000000273cf10 = 0;
    g_0273cf18 = 0;
    ram_000000000273cf20 = 0;
    g_0273cf28 = 0;
    ram_000000000273cf30 = 0;
    g_0273cf38 = 0;
    ram_000000000273cf40 = 0;
    g_0273cf48 = 0;
    ram_000000000273cf50 = 0;
    g_0273cf58 = 0;
    ram_000000000273cf60 = 0;
    g_0273cf83 = 0;
    g_0273cf7b = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_007201cf:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar7 = arg1;
    if (cVar2 == '\0') goto LAB_007201cf;
  }
  if (*plVar7 == 0) {
    plVar7 = (int64_t *)*arg1;
    FUN_00271e80();
    lVar5 = g_02802688;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar7 = arg1;
      if (cVar2 == '\0') {
        plVar7 = &g_02802688;
      }
      lVar5 = *plVar7;
    }
    if (lVar5 == 0) {
      plVar7 = (int64_t *)*arg1;
      FUN_0026cb20();
      if (plVar7 == (int64_t *)0x0) {
        plVar7 = &g_02802688;
      }
      else {
        (**(code **)(*plVar7 + 0x360))();
        cVar2 = FUN_00e85ea0();
        plVar7 = arg1;
        if (cVar2 == '\0') {
          plVar7 = &g_02802688;
        }
      }
      if (*plVar7 != 0) {
        if (-1 < iVar10) {
          local_3c = iVar10 + 1;
        }
        iVar10 = iVar3 + 1;
        if (iVar3 < 0) {
          iVar10 = local_3c;
        }
        local_3c = iVar4 + 1;
        if (iVar4 < 0) {
          local_3c = iVar10;
        }
      }
    }
    else {
      if (-1 < iVar10) {
        local_3c = iVar10 + 1;
      }
      iVar4 = iVar3 + 1;
      if (iVar3 < 0) {
        iVar4 = local_3c;
      }
      local_3c = iVar4;
      if (-1 < local_74) {
        local_3c = local_74;
      }
    }
  }
  else {
    local_3c = 0;
    if (-1 < iVar10) {
      local_3c = iVar10 + 1;
    }
  }
LAB_007202d7:
  if ((char)local_94 == '\0') {
    local_b8 = *arg1;
    local_b0 = '\0';
    local_a8 = *param_2;
    local_a0 = '\0';
    FUN_01d99230(&local_a8,local_3c);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_c8 = *param_2;
    local_c0 = '\0';
    FUN_01d98360(&local_c8,local_3c);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((bVar1) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00720770
// ============================================================
// Function: FUN_00720770
// Address: 00720770
// Size: 1915 bytes
// Class: MUTempoEditorView
// String references:
//   "%@.orig%I.%@"
//   "%@.orig%I"
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void* FUN_00720770(void)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar7;
  int64_t *local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  uint32_t local_a0;
  int64_t *local_98;
  char local_90;
  int local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  int local_44;
  int64_t *local_40;
  int64_t *local_38;
  
  if (((int64_t *)*arg1 == (int64_t *)0x0) ||
     (cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x398))(), cVar4 == '\0')) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    plVar7 = local_a8;
    if (((char)local_a0 == '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if (((char)local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)*arg1 + 0x380))();
    plVar6 = local_a8;
    if (((char)local_a0 == '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if (((char)local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3f0))();
    plVar3 = local_a8;
    if (((char)local_a0 == '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if (((char)local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    local_60 = local_a8;
    if (((char)local_a0 == '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if (((char)local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((plVar7 == (int64_t *)0x0) || (iVar5 = FUN_00d8c7a0(), iVar5 < 0)) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      local_40 = plVar6;
      local_38 = plVar7;
      local_44 = 1;
      plVar7 = (int64_t *)0x0;
      bVar1 = false;
      do {
        if ((local_40 == (int64_t *)0x0) || (iVar5 = FUN_00d8c7a0(), iVar5 < 1)) {
          plVar6 = local_38;
          local_a0 = 2;
          local_a8 = &g_024c5048;
          local_90 = 0;
          FUN_00d50b00();
          local_98 = plVar6;
          local_90 = '\x01';
          local_a8 = (int64_t *)&g_025df2a0;
          local_88 = local_44;
          FUN_00d8cb40();
          local_b8 = local_70;
          local_b0 = 0;
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_b0 = '\x01';
          local_e0 = local_60;
          local_d8 = '\0';
          (**(code **)(*plVar3 + 0x4f8))(&local_e0,&local_b8);
          plVar6 = local_58;
          if (local_58 == plVar7) {
            plVar6 = plVar7;
            bVar2 = bVar1;
            if ((!bVar1) && (plVar7 != (int64_t *)0x0)) {
              if (local_50 != '\0') goto LAB_00720aef;
              FUN_00d50b00();
LAB_00720c70:
              plVar6 = plVar7;
              bVar2 = true;
            }
joined_r0x00720d33:
            plVar7 = plVar6;
            bVar1 = bVar2;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_50 == '\0') {
              if (local_58 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              bVar2 = true;
              if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
                FUN_00d50b20();
                plVar7 = plVar6;
                goto LAB_00720c70;
              }
              goto joined_r0x00720d33;
            }
            if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_00720aef:
            local_50 = '\0';
            plVar7 = plVar6;
            bVar1 = true;
          }
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          local_a8 = &g_024c5048;
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_f8 = local_40;
          FUN_00743400(&local_f8,&local_44,3);
          FUN_00d8cb40();
          local_c8 = local_70;
          local_c0 = 0;
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_c0 = '\x01';
          local_f0 = local_60;
          local_e8 = '\0';
          (**(code **)(*plVar3 + 0x4f8))(&local_f0,&local_c8);
          plVar6 = local_58;
          if (local_58 == plVar7) {
            plVar6 = plVar7;
            bVar2 = bVar1;
            if ((!bVar1) && (local_58 != (int64_t *)0x0)) {
              if (local_50 != '\0') goto LAB_00720b9d;
              FUN_00d50b00();
LAB_00720d49:
              plVar6 = plVar7;
              bVar2 = true;
            }
joined_r0x00720e5c:
            plVar7 = plVar6;
            bVar1 = bVar2;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_50 == '\0') {
              if (local_58 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              bVar2 = true;
              if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
                FUN_00d50b20();
                plVar7 = plVar6;
                goto LAB_00720d49;
              }
              goto joined_r0x00720e5c;
            }
            if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_00720b9d:
            local_50 = '\0';
            plVar7 = plVar6;
            bVar1 = true;
          }
          if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          local_a8 = (int64_t *)&g_0250bfd8;
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          local_a8 = &g_024c5048;
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_44 = local_44 + 1;
        cVar4 = (**(code **)(*plVar7 + 0x398))();
      } while (((cVar4 != '\0') || (cVar4 = (**(code **)(*plVar7 + 0x3a0))(), cVar4 != '\0')) &&
              (local_44 < 99999));
      *(void*)(this_ptr + 1) = 0;
      if (!bVar1) {
        FUN_00d50b00();
      }
      *this_ptr = plVar7;
      *(void*)(this_ptr + 1) = 1;
      plVar7 = local_38;
      plVar6 = local_40;
    }
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}



// ============================================================
// 00721510
// ============================================================
// Function: FUN_00721510
// Address: 00721510
// Size: 1941 bytes
// Class: MUTempoEditorView
// String references:
//   "%@.%@"
//   "%@%@"
//   "%@"
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_00721510(void)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int64_t *plVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  int64_t *local_88;
  int64_t local_80;
  int64_t *local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint32_t local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (((int64_t *)*arg1 == (int64_t *)0x0) ||
     (cVar5 = (**(code **)(*(int64_t *)*arg1 + 0x398))(), cVar5 == '\0')) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  plVar10 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_b8 = plVar10;
  (**(code **)(*(int64_t *)*arg1 + 0x380))();
  local_78 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3f0))();
  local_90 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)*arg1 + 0x370))();
  local_88 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar10 == (int64_t *)0x0) || (iVar6 = FUN_00d8c7a0(), lVar11 = g_02728a40, iVar6 < 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_00721c56;
  }
  if (g_02728a40 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar11;
  local_108 = '\0';
  cVar5 = FUN_00d90eb0();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    lVar1 = *arg1;
    if ((char)arg1[1] == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(arg1 + 1) = 0;
    }
  }
  else {
    local_80 = lVar11;
    iVar6 = FUN_00d8c7a0();
    uVar7 = FUN_00d8c7a0();
    iVar6 = iVar6 + ~uVar7;
    if (-1 < iVar6) {
      do {
        FUN_00d8c7a0();
        FUN_00e7b4e0();
        FUN_00d8e3d0();
        local_100 = local_80;
        local_f8 = '\0';
        cVar5 = (**(code **)(*local_60 + 0x50))();
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar11 = local_80;
        plVar10 = local_b8;
        if (cVar5 != '\0') {
          iVar8 = FUN_00d8c7a0();
          iVar6 = iVar8 + iVar6;
          goto LAB_00721820;
        }
        bVar2 = 0 < iVar6;
        iVar6 = iVar6 + -1;
      } while (bVar2);
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    lVar11 = local_80;
  }
  goto LAB_00721c49;
  while( true ) {
    cVar5 = FUN_00d8ca70();
    iVar6 = iVar8 + 1;
    if ('9' < cVar5) break;
LAB_00721820:
    iVar8 = iVar6;
    iVar6 = FUN_00d8c7a0();
    if ((iVar6 <= iVar8) || (cVar5 = FUN_00d8ca70(), cVar5 < '0')) break;
  }
  FUN_00d97ce0();
  plVar3 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  iVar6 = FUN_00d8c7a0();
  plVar9 = plVar3;
  if (iVar8 < iVar6) {
    FUN_00d8f140();
    local_d0 = plVar3;
    local_118 = local_c8;
    FUN_00083ea0(2,&local_118);
    FUN_00d94e10();
    plVar9 = local_70;
    plVar4 = plVar3;
    if (plVar3 == local_70) {
LAB_00721940:
      plVar9 = plVar4;
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar4 = plVar9;
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_00721940;
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_68 = '\0';
    }
    local_60 = (int64_t *)&g_0253d630;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &g_024c5048;
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_78 == (int64_t *)0x0) || (iVar6 = FUN_00d8c7a0(), iVar6 < 1)) {
    local_58 = 1;
    local_60 = &g_024c5048;
    local_48 = 0;
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = plVar9;
    FUN_00d8cb40();
    local_a0 = local_70;
    local_98 = 0;
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_98 = '\x01';
    local_e0 = local_88;
    local_d8 = '\0';
    (**(code **)(*local_90 + 0x4f8))(&local_e0,&local_a0);
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_60 = &g_024c5048;
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_d0 = local_78;
    FUN_00083ea0(2,&local_d0);
    FUN_00d8cb40();
    local_b0 = local_70;
    local_a8 = 0;
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_a8 = '\x01';
    local_f0 = local_88;
    local_e8 = '\0';
    (**(code **)(*local_90 + 0x4f8))(&local_f0,&local_b0);
    if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_60 = (int64_t *)&g_0253d630;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &g_024c5048;
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00721c49:
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
LAB_00721c56:
  if (local_88 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_90 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_78 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 002b7ee0
// ============================================================
// Function: FUN_002b7ee0
// Address: 002b7ee0
// Size: 1540 bytes
// Class: MUTempoEditorView
// String references:
//   "MUTempoEditorView"
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_002b7ee0(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  uint8_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t **pplVar11;
  int iVar12;
  int64_t *this_ptr;
  int64_t *plVar13;
  bool bVar14;
  int64_t local_f8;
  char local_f0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar8 = (**(code **)(*this_ptr + 0x10))();
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  FUN_01d99a50();
  plVar13 = local_68;
  if (local_60[0] == '\0') {
    if (local_68 == (int64_t *)0x0) goto LAB_002b80f8;
    FUN_00d50b00();
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == (int64_t *)0x0) {
LAB_002b80f8:
    plVar13 = (int64_t *)0x0;
    bVar2 = false;
    goto LAB_002b813f;
  }
  local_60[0] = '\0';
  local_68 = (int64_t *)0x0;
  local_58 = plVar13;
  local_50 = 0xffffffff;
  local_48 = 0;
  while( true ) {
    lVar9 = (int64_t)(int)local_50;
    iVar12 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar12);
    if (*(int *)((int64_t)local_58 + 0xc) <= iVar12) break;
    plVar13 = *(int64_t **)(local_58[2] + 8 + lVar9 * 8);
    local_68 = plVar13;
    if ((g_027ebf10 == '\0') && (iVar12 = ___cxa_guard_acquire(), iVar12 != 0)) {
      g_0273ced8 = FUN_0006d940();
      g_0273cec0 = "MUTempoEditorView";
      g_0273cec8 = 0x2e8;
      g_0273ced0 = FUN_0010c150;
      g_0273cee0 = 0;
      ram_000000000273cee8 = 0;
      g_0273cef0 = 0;
      g_0273cf68 = 0;
      ram_000000000273cf70 = 0;
      g_0273cf78 = 0;
      g_0273cf7a = 1;
      g_0273cef8 = 0;
      ram_000000000273cf00 = 0;
      g_0273cf08 = 0;
      ram_000000000273cf10 = 0;
      g_0273cf18 = 0;
      ram_000000000273cf20 = 0;
      g_0273cf28 = 0;
      ram_000000000273cf30 = 0;
      g_0273cf38 = 0;
      ram_000000000273cf40 = 0;
      g_0273cf48 = 0;
      ram_000000000273cf50 = 0;
      g_0273cf58 = 0;
      ram_000000000273cf60 = 0;
      g_0273cf83 = 0;
      g_0273cf7b = 0;
      ___cxa_guard_release();
    }
    pplVar11 = (int64_t **)&g_02802688;
    if (plVar13 != (int64_t *)0x0) {
      (**(code **)(*plVar13 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pplVar11 = &local_68;
      if (cVar6 == '\0') {
        pplVar11 = (int64_t **)&g_02802688;
      }
    }
    plVar13 = *pplVar11;
    if (plVar13 != (int64_t *)0x0) {
      if (*(char *)(pplVar11 + 1) == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        *(void*)(pplVar11 + 1) = 0;
        bVar2 = true;
      }
      goto LAB_002b812d;
    }
    if (local_50._4_4_ != 0) {
      if (local_50._4_4_ < 1) {
        iVar12 = -local_50._4_4_;
      }
      else {
        local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
        FUN_00d23690();
        local_48 = local_48 + local_50._4_4_;
        iVar12 = 0;
      }
      local_50 = CONCAT44(iVar12,(int)local_50);
    }
  }
  bVar2 = false;
  plVar13 = (int64_t *)0x0;
LAB_002b812d:
  FUN_000a9680();
  FUN_00d50b20();
LAB_002b813f:
  (**(code **)(*this_ptr + 0x58))();
  plVar4 = local_68;
  local_40[0] = local_60[0];
  pcVar10 = local_40;
  if (local_60[0] != '\0') {
    pcVar10 = local_60;
  }
  *pcVar10 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar6 = (**(code **)(*this_ptr + 0x48))();
  if (cVar6 != '\0') {
    (**(code **)(*plVar4 + 0x4a0))();
    plVar1 = *(int64_t **)(local_68[2] + 8);
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x918))();
  }
  (**(code **)(*plVar4 + 0x4a0))();
  plVar1 = *(int64_t **)local_68[2];
  if (local_60[0] != '\0') {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x30))();
  plVar5 = local_68;
  pcVar10 = local_60;
  if (local_60[0] == '\0') {
    pcVar10 = local_38;
  }
  local_38[0] = local_60[0];
  *pcVar10 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_001060a0();
    if (local_68 == (int64_t *)0x0) {
      bVar14 = false;
    }
    else {
      FUN_01d77a20();
      bVar14 = local_f8 != 0;
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar14) {
      FUN_00556e50();
      FUN_001060a0();
      uVar7 = (**(code **)(*local_68 + 0x3c8))();
      *(void*)(plVar4 + 0x29) = uVar7;
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = g_026f6f70;
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_026fc528;
      if (g_026fc528 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar3;
      local_b0 = '\x01';
      local_a8 = 0;
      local_a0 = '\0';
      FUN_00d31230(&local_a8,&local_b8);
      plVar4 = local_68;
      if (local_60[0] == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60[0] = '\0';
      }
      (**(code **)(*plVar1 + 0x6a8))();
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c45dc0
// ============================================================
// Function: FUN_01c45dc0
// Address: 01c45dc0
// Size: 1191 bytes
// Class: MUTempoEditorView
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_01c45dc0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  void *pvVar5;
  void* pVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t this_ptr;
  void* pVar9;
  uint64_t uVar10;
  void* pVar11;
  int64_t *local_40;
  char local_38;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar4 = (int64_t)&g_02572358;
  (*g_02572370)();
  plVar1 = *(int64_t **)(this_ptr + 0x1f8);
  if (*(int *)((int64_t)plVar1 + 0xc) != 0) {
    FUN_00d50b00();
    local_38 = '\0';
    FUN_00d214d0();
    FUN_00d50b20();
    local_40 = plVar1;
  }
  FUN_00d216c0();
  if ((*(int *)(this_ptr + 0x1c8) == 1) && (0 < *(int *)(*(int64_t *)(this_ptr + 0x200) + 0xc)))
  {
    pVar11 = 0xffffffff;
    uVar7 = 0;
    uVar10 = 0xffffffff;
    do {
      cVar3 = FUN_01c82ad0();
      pVar9 = pVar11;
      if (pVar11 == 0xffffffff) {
        pVar9 = (void*)uVar7;
      }
      if (cVar3 != '\0') {
        uVar10 = uVar7 & 0xffffffff;
        pVar11 = pVar9;
      }
      uVar7 = uVar7 + 1;
    } while ((int64_t)uVar7 < (int64_t)*(int *)(*(int64_t *)(this_ptr + 0x200) + 0xc));
    if (pVar11 != 0xffffffff) {
      pVar9 = (void*)uVar10;
      if ((int)pVar11 <= (int)pVar9) {
        iVar8 = (pVar9 - pVar11) + 1;
        do {
          FUN_01c82ae0();
          FUN_01c82aa0();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      pVar6 = pVar11;
      FUN_01c82aa0();
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01909dc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = *(int64_t *)(this_ptr + 0x188);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016caaa0();
      FUN_016bf1f0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (pVar9 == *(int *)(*(int64_t *)(this_ptr + 0x200) + 0xc) - 1U) {
        FUN_016bf540();
      }
      else {
        FUN_01c82aa0();
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01909dc0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar2 = *(int64_t *)(this_ptr + 0x188);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (int64_t *)FUN_016caaa0();
        FUN_00e7c280();
        FUN_016bf260();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if (pVar11 == 0) {
        FUN_016bf510();
      }
    }
  }
  lVar2 = *(int64_t *)(this_ptr + 0x1f8);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar4 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_01f27fe0();
    (**(code **)(*local_40 + 0x400))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 0010d0c0
// ============================================================
// Function: FUN_0010d0c0
// Address: 0010d0c0
// Size: 960 bytes
// Class: MUTempoEditorView
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_0010d0c0(void* param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t this_ptr;
  int64_t **pplVar6;
  int64_t *local_48;
  char local_40;
  char local_31;
  
  plVar1 = (int64_t *)*param_2;
  FUN_001152a0();
  if (plVar1 == (int64_t *)0x0) {
LAB_0010d105:
    param_2 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0010d105;
  }
  plVar1 = (int64_t *)*param_2;
  local_31 = (char)param_2[1];
  if ((local_31 == '\0') || (plVar1 == (int64_t *)0x0)) {
    if (plVar1 == (int64_t *)0x0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  lVar2 = g_026e1370;
  if (g_026e1370 != 0) {
    FUN_00d50b00();
  }
  pplVar6 = &local_48;
  FUN_000175c0();
  plVar4 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar4 == (int64_t *)0x0) goto LAB_0010d463;
  plVar4 = (int64_t *)FUN_00dd6dc0();
  local_48 = plVar4;
  FUN_001156b0();
  if (plVar4 == (int64_t *)0x0) {
LAB_0010d1e2:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0010d1e2;
  }
  plVar4 = *pplVar6;
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if (*(char *)(this_ptr + 0x49) == '\0') {
    local_40 = '\0';
    local_48 = plVar1;
    FUN_00d21140();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    plVar1 = local_48;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      plVar1 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_0010d690();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd9a0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef3f0();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0010d463:
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c44e90
// ============================================================
// Function: FUN_01c44e90
// Address: 01c44e90
// Size: 881 bytes
// Class: MUTempoEditorView
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_01c44e90(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  void *pvVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if (*(int64_t *)(arg1 + 0x198) == 0) {
    if (*(int64_t *)(arg1 + 0x1a8) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar2 = *(int64_t *)(arg1 + 0x1a8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cade0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      if (local_38 == 0) {
        bVar3 = false;
      }
      else if (local_30 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01c451ce;
    }
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    if (*(int64_t *)(arg1 + 0x168) == 0) {
      lVar2 = *(int64_t *)(arg1 + 0x198);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d900();
      if (local_38 == 0) {
        bVar3 = false;
      }
      else if (local_30 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      plVar1 = *(int64_t **)(arg1 + 0x168);
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0xa00))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cade0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      if (local_38 == 0) {
        bVar3 = false;
      }
      else if (local_30 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
LAB_01c451ce:
    *(void*)(this_ptr + 1) = 0;
    if (bVar3) goto LAB_01c451e9;
    if (local_38 != 0) {
      FUN_00d50b00();
      goto LAB_01c451e9;
    }
  }
  local_38 = 0;
LAB_01c451e9:
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 0010cbb0
// ============================================================
// Function: FUN_0010cbb0
// Address: 0010cbb0
// Size: 795 bytes
// Class: MUTempoEditorView
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_0010cbb0(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  void *pvVar6;
  void* pVar7;
  int64_t *plVar8;
  void*arg1;
  int64_t local_78;
  char local_70;
  int64_t local_48;
  char local_40;
  
  plVar8 = (int64_t *)*param_2;
  FUN_001152a0();
  if (plVar8 == (int64_t *)0x0) {
LAB_0010cbf8:
    plVar8 = &g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar8 = param_2;
    if (cVar5 == '\0') goto LAB_0010cbf8;
  }
  lVar3 = plVar8[1];
  if (((char)lVar3 == '\0') || (*plVar8 == 0)) {
    if (*plVar8 != 0) goto LAB_0010cc24;
    bVar1 = true;
  }
  else {
    FUN_00d50b00();
LAB_0010cc24:
    pvVar6 = _pthread_getspecific((void*)plVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    if (local_40 == '\0') {
      if (local_48 != 0) goto LAB_0010cc87;
    }
    else if (local_48 != 0) {
      FUN_00d50b20();
LAB_0010cc87:
      FUN_00dd6a00();
      local_48 = g_026e1370;
      if ((local_70 == '\0') && (local_78 != 0)) {
        FUN_00d50b00();
        local_48 = g_026e1370;
      }
      g_026e1370 = local_48;
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\0';
      FUN_00ca0840();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if (local_78 != 0) {
        FUN_00d50b20();
      }
    }
    bVar1 = false;
  }
  pVar7 = (void*)plVar8;
  plVar8 = (int64_t *)*param_2;
  FUN_001154a0();
  if (plVar8 == (int64_t *)0x0) {
LAB_0010cd7c:
    param_2 = &g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0010cd7c;
  }
  lVar4 = param_2[1];
  if (((char)lVar4 == '\0') || (*param_2 == 0)) {
    if (*param_2 == 0) goto LAB_0010ce9e;
  }
  else {
    FUN_00d50b00();
  }
  plVar8 = (int64_t *)*arg1;
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  lVar2 = g_02765280;
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
    lVar2 = g_02765280;
  }
  g_02765280 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar8 + 0x4f0))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((char)lVar4 != '\0') {
    FUN_00d50b20();
  }
LAB_0010ce9e:
  if ((char)lVar3 != '\0' && !bVar1) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0010c180
// ============================================================
// Function: FUN_0010c180
// Address: 0010c180
// Size: 523 bytes
// Class: MUTempoEditorView
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_0010c180(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_0006daf0();
  *this_ptr = &g_0266bec8;
  this_ptr[2] = &g_0266c900;
  this_ptr[0x27] = &g_0266c940;
  this_ptr[0x28] = &g_0266c990;
  this_ptr[0x29] = 0;
  this_ptr[0x2a] = 0;
  this_ptr[0x2b] = 0;
  this_ptr[0x2c] = 0;
  this_ptr[0x2d] = 0;
  this_ptr[0x2e] = 0;
  this_ptr[0x2f] = 0;
  this_ptr[0x30] = 0;
  *(void*)((int64_t)this_ptr + 0x181) = 0;
  *(void*)((int64_t)this_ptr + 0x189) = 0;
  this_ptr[0x33] = 0;
  this_ptr[0x34] = 0;
  this_ptr[0x35] = 0;
  this_ptr[0x36] = 0;
  this_ptr[0x37] = 0;
  this_ptr[0x38] = 0;
  *(void*)((int64_t)this_ptr + 0x1c1) = 0;
  *(void*)((int64_t)this_ptr + 0x1c9) = 0;
  this_ptr[0x3b] = 0;
  this_ptr[0x3c] = 0;
  this_ptr[0x3d] = 0;
  this_ptr[0x3e] = 0;
  this_ptr[0x3f] = 0;
  if (g_02802630 < 2) {
    this_ptr[0x40] = 0;
    this_ptr[0x41] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x3f] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x40] = 0;
    if (iVar2 < 2) {
      this_ptr[0x41] = 0;
    }
    else {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x40] = puVar3;
      iVar2 = g_02802630;
      this_ptr[0x41] = 0;
      if (1 < iVar2) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        (*g_02572370)();
        this_ptr[0x41] = puVar3;
      }
    }
  }
  this_ptr[0x42] = 0;
  *(void*)(this_ptr + 0x43) = 0;
  *(void*)((int64_t)this_ptr + 0x21c) = 0;
  *(void*)((int64_t)this_ptr + 0x224) = 0;
  *(void*)((int64_t)this_ptr + 0x229) = 0;
  *(void*)((int64_t)this_ptr + 0x231) = 0;
  *(void*)((int64_t)this_ptr + 0x23c) = 0;
  *(void*)((int64_t)this_ptr + 0x244) = 0;
  *(void*)((int64_t)this_ptr + 0x249) = 0;
  *(void*)((int64_t)this_ptr + 0x254) = 0;
  *(void*)((int64_t)this_ptr + 0x25c) = 0;
  *(void*)((int64_t)this_ptr + 0x264) = 0;
  this_ptr[0x4e] = 0;
  this_ptr[0x4f] = 0;
  this_ptr[0x50] = 0;
  this_ptr[0x51] = 0;
  this_ptr[0x52] = 0;
  this_ptr[0x53] = 0;
  *(void*)((int64_t)this_ptr + 0x29c) = 0;
  *(void*)((int64_t)this_ptr + 0x2a4) = 0;
  this_ptr[0x56] = 0;
  this_ptr[0x57] = 0;
  this_ptr[0x58] = 0;
  this_ptr[0x59] = 0;
  this_ptr[0x5a] = 0;
  this_ptr[0x5b] = 0;
  *(void*)((int64_t)this_ptr + 0x2df) = 0;
  return;
}



// ============================================================
// 00722260
// ============================================================
// Function: FUN_00722260
// Address: 00722260
// Size: 704 bytes
// Class: MUTempoEditorView
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


int64_t * FUN_00722260(int64_t *param_1,void*param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void*puVar4;
  void *pvVar5;
  void*puVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  uint64_t local_b8;
  uint8_t local_b0;
  void*local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint64_t local_80;
  uint32_t local_78;
  int64_t local_58;
  char local_50;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &g_02572358;
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar1 = *param_1;
  if (lVar1 != 0) {
    local_90 = 0;
    local_98 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
        local_98 = lVar2;
        cVar3 = FUN_00d23d70();
        if (cVar3 != '\0') {
          *(void*)(this_ptr + 1) = 0;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          *this_ptr = lVar2;
          *(void*)(this_ptr + 1) = 1;
          FUN_000be170();
          if (puVar4 == (void*)0x0) {
            return this_ptr;
          }
          goto LAB_007224e5;
        }
        pvVar5 = _pthread_getspecific((void*)puVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        if (lVar2 != 0) {
          pvVar5 = _pthread_getspecific((void*)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_00d214d0();
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar7 = lVar7 + 1;
        local_80 = CONCAT44(local_80._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
  }
  local_b8 = *param_2;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = puVar4;
  FUN_00722260(&local_a8,&local_b8);
  if (puVar4 != (void*)0x0) {
LAB_007224e5:
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01c46820
// ============================================================
// Function: FUN_01c46820
// Address: 01c46820
// Size: 725 bytes
// Class: MUTempoEditorView
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_01c46820(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar4;
  int iVar5;
  bool bVar6;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar1 = *arg1;
  if ((param_2 & 2) != 0) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(lVar1 + 0xc) < 1) {
      bVar4 = false;
    }
    else {
      iVar5 = 0;
      do {
        FUN_01c82ad0();
        FUN_01c82ae0();
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar1 + 0xc));
      bVar4 = true;
    }
    FUN_01c79df0();
    goto LAB_01c46ad4;
  }
  if (lVar1 == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = *(int *)(lVar1 + 0xc) != 0;
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    do {
      lVar3 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) goto LAB_01c4696a;
      local_58 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar3 * 8);
      cVar2 = FUN_01c82ad0();
    } while (cVar2 != '\0');
    bVar6 = false;
LAB_01c4696a:
    FUN_01c79df0();
  }
  bVar4 = false;
  if (((param_2 & 4) == 0) && (bVar4 = false, !bVar6)) {
    FUN_01c46c40();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        goto LAB_01c469c6;
      }
    }
    else if (local_58 != 0) {
LAB_01c469c6:
      if (*(int *)(local_58 + 0xc) < 1) {
        bVar4 = false;
      }
      else {
        iVar5 = 0;
        bVar4 = false;
        do {
          cVar2 = FUN_01c82ad0();
          if (cVar2 != '\0') {
            bVar4 = true;
            FUN_01c82ae0();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(local_58 + 0xc));
      }
      FUN_01c79df0();
      FUN_00d50b20();
      goto LAB_01c46a54;
    }
    bVar4 = false;
  }
LAB_01c46a54:
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar5 = 0;
      do {
        cVar2 = FUN_01c82ad0();
        if (cVar2 == '\0') {
          bVar4 = true;
          FUN_01c82ae0();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_01c79df0();
  }
LAB_01c46ad4:
  if (bVar4) {
    (**(code **)(*this_ptr + 0x620))();
    FUN_01c45dc0();
    FUN_01c464b0();
  }
  return;
}



// ============================================================
// 01c45890
// ============================================================
// Function: FUN_01c45890
// Address: 01c45890
// Size: 513 bytes
// Class: MUTempoEditorView
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_01c45890(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar2 = local_58;
  FUN_01c45b80();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  local_58 = *param_2;
  cVar3 = FUN_00d23d70();
  lVar5 = lVar2;
  if (cVar3 == '\0') {
    lVar1 = arg1[0x40];
    if (lVar1 != 0) {
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_40) break;
        local_58 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        FUN_01c82aa0();
        FUN_01c82ae0();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01c79df0();
    }
    (**(code **)(*arg1 + 0x620))();
    FUN_01c45dc0();
    FUN_01c464b0();
    FUN_01c465e0();
    if (lVar2 != local_58) {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      lVar5 = local_58;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 008634f0
// ============================================================
// Function: FUN_008634f0
// Address: 008634f0
// Size: 626 bytes
// Class: MUTempoEditorView
// String references:
//   "MUTempoEditorView"
//   "MUEditTimelineMode"
//   "_editTimelineMode"
//   "=MUEditTimelineModeNone"
//   "=MUEditTimelineAndStretchElementsMode"
//   "=MUEditTimelineBackgroundOnlyMode"
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void* FUN_008634f0(void)

{
  bool bVar1;
  int iVar2;
  
  if (g_0271ad90 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      bVar1 = *g_0271ad60 != '=';
      g_0271ad80 = -(uint)(*g_0271ad60 == '=');
      g_0271ad84 = 0;
      if (*g_0271ad68 != '=') {
        g_0271ad84 = (uint)bVar1;
      }
      g_0271ad88 = 1;
      if (*g_0271ad70 != '=') {
        g_0271ad88 = g_0271ad84 + 1;
      }
      g_0271ad8c = g_0271ad84 == bVar1 && g_0271ad88 == g_0271ad84 + 1;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0273d410 = "_editTimelineMode";
      g_0273d418 = &g_0273cec0;
      g_0273d420 = 0;
      g_0273d428 = 0x6500;
      g_0273d430 = "MUEditTimelineMode";
      g_0273d438 = &g_0271ad98;
      g_0273d440 = 0;
      ram_000000000273d448 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0273d410;
}



// ============================================================
// 00865db0
// ============================================================
// Function: FUN_00865db0
// Address: 00865db0
// Size: 512 bytes
// Class: MUTempoEditorView
// String references:
//   "MUTempoEditorView"
//   "MUTempoEditorDelegate"
//   "_tempoEditorDelegate"
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void* FUN_00865db0(void)

{
  int iVar1;
  int iVar2;
  
  // [STATIC_INIT: property registration]
      g_0273da50 = (iVar1 != 0) << 6 | 0x80;
      g_0273da38 = "_tempoEditorDelegate";
      g_0273da40 = &g_0273cec0;
      g_0273da48 = 0;
      g_0273da58 = 0;
      ram_000000000273da60 = 0;
      g_0273da68 = 0;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &g_0273da38;
}



// ============================================================
// 00866df0
// ============================================================
// Function: FUN_00866df0
// Address: 00866df0
// Size: 550 bytes
// Class: MUTempoEditorView
// String references:
//   "MUTempoEditorView"
//   "MUTempoEditMode"
//   "_tempoEditMode"
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void* FUN_00866df0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0273dd08 = "_tempoEditMode";
      g_0273dd10 = &g_0273cec0;
      g_0273dd18 = 0;
      g_0273dd20 = 0x6500;
      g_0273dd28 = "MUTempoEditMode";
      g_0273dd30 = &g_0273dd80;
      g_0273dd38 = 0;
      ram_000000000273dd40 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0273dd08;
}



// ============================================================
// 00863790
// ============================================================
// Function: FUN_00863790
// Address: 00863790
// Size: 574 bytes
// Class: MUTempoEditorView
// String references:
//   "MUTempoEditorView"
//   "MUTimelineToolMode"
//   "_toolMode"
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void* FUN_00863790(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0273d458 = "_toolMode";
      g_0273d460 = &g_0273cec0;
      g_0273d468 = 0;
      g_0273d470 = 0x6500;
      g_0273d478 = "MUTimelineToolMode";
      g_0273d480 = &g_0273d5c8;
      g_0273d488 = 0;
      ram_000000000273d490 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0273d458;
}

